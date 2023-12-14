/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:22:11 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/23 16:21:07 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "A zombie was created!" << std::endl;
}

Zombie::~Zombie( void )
{
	if (_name.empty())
		std::cout << "The unnamed zombie was destroyed!" << std::endl;
	else
		std::cout << "The zombie called " << _name << " was destroyed!" << std::endl;
}

std::string Zombie::getName( void ) const
{
	if (_name.empty())
		return ("An unnamed zombie");
	return (_name);
}

void	Zombie::setName( std::string value )
{
	_name = value;
}

void	Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}