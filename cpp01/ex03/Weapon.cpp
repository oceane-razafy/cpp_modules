/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:57:12 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/17 02:02:22 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string value)
{
	if (value.empty())
		_type = "weapon of unknown type";
	else
		_type = value;
}