/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:05:33 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/17 01:43:00 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( std::string name )
	: _name(name)
{
	if (_name.empty())
		std::cout << "The unnamed zombie was created" << std::endl;
	else
		std::cout << "The zombie called " << _name << " was created!" << std::endl;
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

void	Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


