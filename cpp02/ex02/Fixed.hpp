/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:34:24 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/29 02:21:06 by orazafy          ###   ########.fr       */
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
				~Fixed( void );

		static Fixed		&min( Fixed &a, Fixed &b);
		static const Fixed	&min( const Fixed &a, const Fixed &b);
		static Fixed		&max( Fixed &a, Fixed &b);
		static const Fixed	&max( const Fixed &a, const Fixed &b);

		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed 	&operator=( const Fixed &other );
		Fixed 	operator+(const Fixed &other ) const;
		Fixed 	operator-(const Fixed &other) const;
		Fixed 	operator*(const Fixed &other) const;
		Fixed 	operator /(const Fixed &other) const;

		Fixed 	&operator++(void);
		Fixed 	operator++(int);
		Fixed 	&operator--(void);
		Fixed 	operator--(int);

		bool	operator>( const Fixed &other ) const;
		bool 	operator<( const Fixed &other ) const;
		bool 	operator>=( const Fixed &other ) const;
		bool 	operator<=( const Fixed &other ) const;
		bool 	operator==( const Fixed &other ) const;
		bool	operator!=( const Fixed &other ) const;
		
	private:
		int					_fixedNb;
		static const int 	_nbFractBits = 8;
};

std::ostream &operator<<( std::ostream &o, const Fixed &rhs );

#endif