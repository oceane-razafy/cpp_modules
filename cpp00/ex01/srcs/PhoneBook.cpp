/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:57:38 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/10 12:52:12 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_contactId = -1;
	_hasExistingContacts = 0;
}

PhoneBook::~PhoneBook(void)
{	
}

int	PhoneBook::addContact(void)
{
	std::cout << std::endl;
	std::cout << "----------    Adding a new contact    ----------" << std::endl;
	_contactId++;
	_contactId = _contactId % 8;
	if (_hasExistingContacts == 0)
		_hasExistingContacts = 1;
	return (_contacts[_contactId].initInfo());
}

int		PhoneBook::searchContact(void)
{
	if (_hasExistingContacts == 0)
	{
		std::cout << "The phonebook is currently empty. Please add a contact before searching." << std::endl;
		return (0);
	}
	std::cout << std::endl;
	std::cout << "----------      Search a contact      ----------" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|   INDEX  |";
	std::cout << "FIRST NAME|";
	std::cout << " LAST NAME| ";
	std::cout << "NICKNAME |" << std::endl;
	_displayAllContacts(_contacts);
	return (_getUserIndexInput());
}

std::string	PhoneBook::_truncateFieldName(std::string info) const
{
	if (info.length() <= 10)
		return (info);
	return (info.substr(0, 9) + ".");
}

void	PhoneBook::_displayAllContacts(Contact _contacts[8]) const
{
	int i;
	
	i = 0;
	while (i < 8)
	{
		if (_contacts[i].getFirstName() == "")
			break ;
		std::cout << "|----------|----------|----------|----------|" << std::endl;
		std::cout << "|";
		std::cout << std::setw(10) << std::right << i;
		std::cout << "|";
		std::cout << std::setw(10) << std::right << _truncateFieldName(_contacts[i].getFirstName());
		std::cout << "|";
		std::cout << std::setw(10) << std::right << _truncateFieldName(_contacts[i].getLastName());
		std::cout << "|";
		std::cout << std::setw(10) << std::right << _truncateFieldName(_contacts[i].getNickname());
		std::cout << "|";
		std::cout << std::endl;
		i++;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << std::endl;
}

int	PhoneBook::_getUserIndexInput(void) const
{
	std::string indexString;
	int			indexInt;
	bool		hasError;

	hasError = true;
	while (hasError == true)
	{
		std::cout << "Please enter the index of the contact you wish to display: ";
		if (!std::getline(std::cin, indexString))
		{
			std::cerr << std::endl << "============== Error reading input ==============" << std::endl;
			break ;
		}
		try
		{
			if (std::istringstream(indexString) >> indexInt)
			{
				if (indexInt >= 8 || indexInt < 0)
					throw std::invalid_argument("index should be within the range of 0 to 7");
				if (_contacts[indexInt].getFirstName() == "")
				{
						std::cerr << "ERROR: index should be within the range displayed in the table above" << std::endl;
						continue;
				}
				_displayContactInfo(_contacts[indexInt]);
				hasError = false;
			}
			else
				std::cerr << "ERROR: index should be within the range of 0 to 7" << std::endl;
		}
		catch (const std::invalid_argument& e)
		{
			std::cerr << "ERROR: index should be within the range of 0 to 7" << std::endl;
		}
	}
	return (hasError);
}

void	PhoneBook::_displayContactInfo(Contact contact) const
{
	std::cout << "FIRST NAME:     " << contact.getFirstName() << std::endl;
	std::cout << "LAST NAME:      " << contact.getLastName() << std::endl;
	std::cout << "NICKNAME:       " << contact.getNickname() << std::endl;
	std::cout << "PHONE NUMBER:   " << contact.getPhoneNumber() << std::endl;
	std::cout << "DARKEST SECRET: " << contact.getDarkestSecret() << std::endl;
}
