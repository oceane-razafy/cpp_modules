/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:20 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 15:48:59 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
	: Animal("Cat")
{
	_brain = new Brain();
	std::cout << "A Cat has been created!" << std::endl;
}

Cat::Cat(const Cat &other)
	: Animal(other)
{ 
	if (other._brain != NULL)
		_brain = new Brain(*other._brain);
	else
		_brain = NULL;
	std::cout << "A Cat like " << other.type << " has been created!" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
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

Cat::~Cat(void)
{
	if (_brain != NULL)
		delete _brain;
	std::cout << type << " has been destroyed!" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow! Meow!" << std::endl;
}
