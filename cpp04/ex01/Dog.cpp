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
	_brain = new Brain();
	std::cout << "A Dog has been created!" << std::endl;
}

Dog::Dog(const Dog &other)
	: Animal(other)
{
	if (other._brain != NULL)
		_brain = new Brain(*other._brain);
	else
		_brain = NULL;
	std::cout << "A Dog like " << other.type << " has been created!" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		type = other.type;
		if (_brain != NULL)
			delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	if (_brain != NULL)
		delete _brain;
	std::cout << type << " has been destroyed!" << std::endl;
}

Brain *Dog::getBrain(void) const
{
	return (_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof! Woof!" << std::endl;
}
