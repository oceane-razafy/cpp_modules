/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:07:48 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/06 17:10:29 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) 
	: FragTrap(),
	ScavTrap(),
	_name("without a name")
{
	ClapTrap::_name = _name + "_clap_name";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap " << _name << " has been created!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
	: FragTrap(name),
	ScavTrap(name),
	_name(name)
{
	ClapTrap::_name = name + "_clap_name";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap " << _name << " has been created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
	: ClapTrap(other),
	FragTrap(other),
	ScavTrap(other),
	_name(other._name)
{
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "A DiamondTrap like " << other._name << " has been created !" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		std::cout << "DiamondTrap " << _name << " is about to look like " << other._name << std::endl;
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		return (*this);
	}
	std::cout << "DiamondTrap " << _name << " keeps its attribute values" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " has been destroyed!" << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (_name);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap's name: " << _name << std::endl;
	std::cout << "ClapTrap's name: " << ClapTrap::_name << std::endl;
}


