/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:19:04 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/06 20:21:53 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
	: WrongAnimal("WrongCat")
{
	std::cout << "A WrongCat has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
	: WrongAnimal(other)
{
	std::cout << "A WrongCat like " << other.type << " has been created!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << type << " has been destroyed!" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meow! Meow!" << std::endl;
}