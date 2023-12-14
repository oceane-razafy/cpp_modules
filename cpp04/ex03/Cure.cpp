/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:31 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 19:33:12 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("cure")
{
	std::cout << "A Cure has been created!" << std::endl;
}

Cure::Cure(const Cure &other)
	: AMateria(other)
{
	std::cout << "A Cure has been created!" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Cure::~Cure(void)
{
	std::cout << "A Cure has been destroyed!" << std::endl;
}

 AMateria	*Cure::clone(void) const
{
	AMateria *newCure = new Cure();
	return (newCure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
