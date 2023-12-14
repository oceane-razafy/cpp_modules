/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:57:31 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/03 13:30:03 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	getUserInput(int *exitStatus)
{
	std::string userInput;

	std::cout << std::endl;
	std::cout << "-------------------- MENU ----------------------" << std::endl;
	std::cout << "Type 'ADD' to save a new contact" << std::endl;
	std::cout << "Type 'SEARCH' to display a specific contact" << std::endl;
	std::cout << "Type 'EXIT' to quit this phone book" << std::endl;
	std::cout << "=> Please enter your choice (ADD, SEARCH, or EXIT): ";
	if (!std::getline(std::cin, userInput))
	{
		*exitStatus = 1;
		std::cerr << std::endl << "============== Error reading input ==============" << std::endl;
	}
	else
	 	*exitStatus = 0;
	return (userInput);
}

int	main(void)
{
	std::string userInput;
	PhoneBook 	phoneBook;
	int			exitStatus;
	
	exitStatus = 0;
	std::cout << "========== WELCOME TO YOUR PHONE BOOK! ==========" << std::endl;
	while (exitStatus == 0)
	{
		userInput = getUserInput(&exitStatus);
		if ((userInput == "EXIT") || (exitStatus != 0))
			break ;
		else if (userInput == "ADD")
			exitStatus = phoneBook.addContact();
		else if (userInput == "SEARCH")
			exitStatus = phoneBook.searchContact();	
	}
	std::cout << "============ EXITING YOUR PHONE BOOK ============" << std::endl;
	return (exitStatus);
}
