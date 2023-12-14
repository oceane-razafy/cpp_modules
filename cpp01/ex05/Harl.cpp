/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:39:57 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/19 00:15:38 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
}

Harl::~Harl( void )
{
}

void	Harl::_debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Harl::_info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::_warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error( void )
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain( std::string level )
{
	int			i = 0;
	void		(Harl::*levelMsgs[4])( void ) = 
			{&Harl::_debug,
			&Harl::_info,
			&Harl::_warning,
			&Harl::_error};
	std::string	levelNames[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	while (i < 4)
	{
		if (levelNames[i] == level)
		{
			(this->*levelMsgs[i])();
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cerr << "ERROR: Invalid level input" << std::endl;
}
