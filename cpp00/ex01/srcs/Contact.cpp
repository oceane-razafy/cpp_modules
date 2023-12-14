/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:57:22 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/02 00:57:25 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	_errorFlag = false;
}

Contact::~Contact(void)
{
}

std::string	Contact::getFirstName(void) const
{
	return (_firstName);
}

std::string	Contact::getLastName(void) const
{
	return (_lastName);
}

std::string	Contact::getNickname(void) const
{
	return (_nickname);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) const
{
	return (_darkestSecret);	
}

void	Contact::setFirstName(std::string value)
{
	if (value.empty())
		throw std::invalid_argument("ERROR: First name cannot be empty");
	_firstName = value;
}

void	Contact::setLastName(std::string value)
{
	if (value.empty())
		throw std::invalid_argument("ERROR: Last name cannot be empty");
	_lastName = value;
}

void	Contact::setNickname(std::string value)
{
	if (value.empty())
		throw std::invalid_argument("ERROR: Nickname cannot be empty");
	_nickname = value;
}

void	Contact::setPhoneNumber(std::string value)
{
	size_t i;
	
	if (value.empty())
		throw std::invalid_argument("ERROR: Phone number cannot be empty");
	i = 0;
	while (i < value.length())
	{
		if (!std::isdigit(value[i]))
			throw std::invalid_argument("ERROR: Phone number should contain numeric digits only");	
		i++;
	}
	_phoneNumber = value;
}

void	Contact::setDarkestSecret(std::string value)
{
	if (value.empty())
		throw std::invalid_argument("ERROR: Darkest secret cannot be empty");
	_darkestSecret = value;
}

int	Contact::initInfo(void)
{
	std::string userInput;

	_getUserInput("first name");
	if (_errorFlag == false)
		_getUserInput("last name");
	if (_errorFlag == false)
		_getUserInput("nickname");
	if (_errorFlag == false)
		_getUserInput("phone number");
	if (_errorFlag == false)
		_getUserInput("darkest secret");
	return (_errorFlag);
}

void	Contact::_getUserInput(std::string field)
{
	std::string userInput;

	while (true)
	{
		std::cout << "Please enter new contact's " << field << ": ";
		if (!std::getline(std::cin, userInput))
		{
			std::cerr << std::endl << "============== Error reading input ==============" << std::endl;
			_errorFlag = true;
			break ;
		}
		else
		{
			try
			{
				_handlingEachFieldInput(field, userInput);
				break ;
			} catch (const std::invalid_argument& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
}

void		Contact::_handlingEachFieldInput(std::string field, std::string userInput)
{
	if (field == "first name")
		this->setFirstName(userInput);
	else if (field == "last name")
		this->setLastName(userInput);
	else if (field == "nickname")
		this->setNickname(userInput);
	else if (field == "phone number")
		this->setPhoneNumber(userInput);
	else if (field == "darkest secret")
		this->setDarkestSecret(userInput);
}
