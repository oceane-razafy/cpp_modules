/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:28:23 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 15:49:38 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal(void)
	: type("no type")
{
	std::cout << "An Animal has been created!" << std::endl;
}

AAnimal::AAnimal(std::string type)
	: type(type)
{
	std::cout << "An Animal has been created!" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
	: type(other.type)
{
	std::cout << "An Animal has been created!" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "An Animal has been destroyed!" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (type);
}

void	AAnimal::setType(const std::string &value)
{
	type = value;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Animaaaaaaaaaaaaaaaaal!" << std::endl;
}
