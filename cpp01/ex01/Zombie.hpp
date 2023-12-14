/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:22:13 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/23 16:21:14 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
					Zombie( void );
					~Zombie( void );
		std::string	getName( void ) const;
		void		setName( std::string value );
		void 		announce( void );

	private:
		std::string	_name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif