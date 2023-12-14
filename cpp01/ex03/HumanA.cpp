/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:13:33 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/23 16:18:20 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon)
	: _weapon(weapon), 
	_name(name)
{
}

HumanA::~HumanA(void)
{
}

std::string	HumanA::getName(void) const
{
	if (_name.empty())
		return ("An unnamed human A");
	return (_name);
}

void	HumanA::attack(void) const
{
	std::cout << getName() << " attacks with their " << _weapon.getType() << std::endl;
}