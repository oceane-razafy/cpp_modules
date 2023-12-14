/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:25:35 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/16 20:41:14 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string	brain;
	std::string *stringPTR;
	
	brain = "HI THIS IS BRAIN";
	stringPTR = &brain;
	std::string	&stringREF = brain;
	std::cout << "------------------ADDRESSES------------------------" << std::endl;
	std::cout << "The address of the string: " << &brain << std::endl;
	std::cout << "The address stored in stringPTR: " << stringPTR << std::endl;
	std::cout << "The address stored in stringREF: " << &stringREF << std::endl;

	std::cout << "------------------VALUES------------------------" << std::endl;
	std::cout << "The value of the string: " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR <<  std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF <<  std::endl;
	return (0);
}