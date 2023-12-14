/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:18 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 16:36:03 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
	: type("no type")
{
	std::cout << "A Materia has been created!" << std::endl;
}

AMateria::AMateria(const std::string &type)
	: type(type)
{
	std::cout << "A Materia has been created!" << std::endl;
}

AMateria::AMateria(const AMateria &other)
	: type(other.type)
{
	std::cout << "A Materia has been created!" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "A Materia has been destroyed!" << std::endl;
}

const std::string	&AMateria::getType(void) const
{
	return (type);
}

void	AMateria::setType(const std::string &value)
{
	type = value;
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* A Materia is used on " << target.getName() << " *" << std::endl;
}
