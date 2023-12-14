/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:25 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 19:09:19 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
	: _name("with no name")
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Character " << _name << " has been created!" << std::endl;
}

Character::Character(const std::string &name)
	: _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Character " << _name << " has been created!" << std::endl;
}

Character::Character(const Character &other)
	: _name(other._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._inventory[i] != NULL)
			_inventory[i] = other._inventory[i]->clone();
		else
			_inventory[i] = NULL;		
	}
	std::cout << "Character " << _name << " has been created!" << std::endl;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		_name = other._name;
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i] != NULL)
			{
				delete _inventory[i];
				_inventory[i] = NULL;
			}
			if (other._inventory[i] != NULL)
				_inventory[i] = other._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] != NULL)
			delete _inventory[i];
	}
	std::cout << "A Character " << _name << " has been destroyed!" << std::endl;
}

std::string const	&Character::getName(void) const
{
	return (_name);
}

AMateria	**Character::getInventory(void)
{
	return (_inventory);
}

void	Character::setName(const std::string &name)
{
	_name = name;
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Equip failed: Materia does not exist" << std::endl;	
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "Character " << _name << " is now equipped with " << m->getType() 
			<< " in inventory place n° " << i << "!" << std::endl;
			return ;
		}	
	}
	std::cout << "Equip failed: Inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (_inventory[idx] == NULL)
		{
		 	std::cout << "Unequip failed: Nothing to unequip at inventory index n° " << idx << "!" << std::endl;
			return ;
		}	
		std::cout << "Character " << _name << " is gonna be unequipped with " << _inventory[idx]->getType()
		<< " at inventory index n° " << idx << "!" << std::endl;
		_inventory[idx] = NULL;
		return ;
	}
	std::cout << "Unequip failed: Inventory index does not exist: " << idx << "!" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if ((idx < 0 || idx > 3) || _inventory[idx] == NULL)
		std::cout << "Character " << _name << " does not have a materia with the index provided: " << idx << "!" << std::endl;
	else
	{
		// std::cout << "Character " << _name << ":";
		_inventory[idx]->use(target);
	}
}

