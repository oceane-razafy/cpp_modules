/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:05:36 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/16 17:04:56 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
					Zombie( std::string name );
					~Zombie( void );
		std::string	getName( void ) const;
		void 		announce( void );

	private:
		std::string	_name;
};

Zombie*	newZombie( std::string name );
void 	randomChump( std::string name );

#endif
