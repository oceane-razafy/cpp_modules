/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:13:39 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/23 16:18:35 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
	: _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB(void)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

std::string	HumanB::getName(void) const
{
	if (_name.empty())
		return ("An unnamed human B");
	return (_name);
}

void	HumanB::attack(void) const
{
	if (_weapon == NULL)
		std::cerr << getName() << " does not have any weapon" << std::endl;
	else
		std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
}