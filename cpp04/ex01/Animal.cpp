/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:25 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 15:49:38 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
	: type("no type")
{
	std::cout << "An Animal has been created!" << std::endl;
}

Animal::Animal(std::string type)
	: type(type)
{
	std::cout << "An Animal has been created!" << std::endl;
}

Animal::Animal(const Animal &other)
	: type(other.type)
{
	std::cout << "An Animal has been created!" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "An Animal has been destroyed!" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (type);
}

void	Animal::setType(const std::string &value)
{
	type = value;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animaaaaaaaaaaaaaaaaal!" << std::endl;
}
