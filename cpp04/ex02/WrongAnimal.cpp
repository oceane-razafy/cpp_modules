/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:18:59 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 15:49:38 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
	: type("WrongAnimal")
{
	std::cout << "A WrongAnimal has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
	: type(type)
{
	std::cout << "A WrongAnimal has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
	: type(other.type)
{
	std::cout << "A WrongAnimal has been created!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "A WrongAnimal has been destroyed!" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::setType(const std::string &value)
{
	type = value;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wroooooong Animaaaaaaaaaaaaaaaaal!" << std::endl;
}