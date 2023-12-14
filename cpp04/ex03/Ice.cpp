/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:36 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 15:48:59 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
	std::cout << "An Ice has been created!" << std::endl;
}

Ice::Ice(const Ice &other)
	: AMateria(other)
{
	std::cout << "An Ice has been created!" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "An Ice has been destroyed!" << std::endl;
}

AMateria	*Ice::clone(void) const
{
	AMateria *newIce = new Ice();
	return (newIce);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
