/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:16 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 15:48:59 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
	: Animal("Dog")
{
	std::cout << "A Dog has been created!" << std::endl;
}

Dog::Dog(const Dog &other)
	: Animal(other)
{
	std::cout << "A Dog like " << other.type << " has been created!" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << type << " has been destroyed!" << std::endl;
}


void	Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}