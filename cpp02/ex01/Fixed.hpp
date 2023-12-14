/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:29:35 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/29 02:20:58 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
	public:
				Fixed( void );
				Fixed( const Fixed &other );
				Fixed( const int nb);
				Fixed( const float nb );
		Fixed 	&operator=( const Fixed &other );
				~Fixed( void );
		
		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		
	private:
		int					_fixedNb;
		static const int 	_nbFractBits = 8;
};

std::ostream &operator<<( std::ostream &o, const Fixed &rhs );

#endif