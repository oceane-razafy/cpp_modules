/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:34:21 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/30 18:29:58 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
	: _fixedNb( 0 )
{
}

Fixed::Fixed( const Fixed &other )
{
	*this = other;
}

Fixed::Fixed( const int nb) 
	: _fixedNb( nb << _nbFractBits)
{
}

Fixed::Fixed( const float nb ) 
	: _fixedNb( roundf( nb * (1 << _nbFractBits) ) )
{
}

Fixed::~Fixed( void )
{
}

// ---------- STATIC FUNCTIONS ----------

Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	return( a < b ? a : b );
}

const Fixed	&Fixed::min( const Fixed &a, const Fixed &b )
{
	return( a < b ? a : b );
}

Fixed &Fixed::max( Fixed &a, Fixed &b )
{
	return ( a > b ? a : b );
}

const Fixed	&Fixed::max( const Fixed &a, const Fixed &b )
{
	return ( a > b ? a : b );
}

// ---------- NON STATIC FUNCTIONS ----------

int	Fixed::getRawBits( void ) const
{
	return ( _fixedNb );
}

void	Fixed::setRawBits( int const raw )
{
	_fixedNb = raw;
}

float	Fixed::toFloat( void ) const
{
	return ( static_cast<float> (_fixedNb) / (1 << _nbFractBits) );
}

int		Fixed::toInt( void ) const
{
	return ( _fixedNb >> _nbFractBits );
}

// ---------- COPY ASSIGNMENT OPERATOR ----------

Fixed &Fixed::operator=( const Fixed &other )
{
	if (this != &other)
	{
		_fixedNb = other.getRawBits();
	}
	return ( *this );
}

// ---------- ARITHMETIC OPERATORS ----------

Fixed	Fixed::operator+( const Fixed &other ) const
{
	return ( Fixed( toFloat() + other.toFloat() ) );
}

Fixed	Fixed::operator-( const Fixed &other ) const
{
	return ( Fixed( toFloat() - other.toFloat() ) );
}

Fixed	Fixed::operator*( const Fixed &other ) const
{
	return ( Fixed( toFloat() * other.toFloat() ) );
}

Fixed	Fixed::operator/( const Fixed &other ) const
{
	return ( Fixed( toFloat() / other.toFloat() ) );
}

// ---------- INCREMENT/DECREMENT OPERATORS ----------

Fixed	&Fixed::operator++( void )
{
	_fixedNb++;
	return ( *this );
}

Fixed	Fixed::operator++( int )
{
	Fixed tmp( *this );
	
	_fixedNb++;
	return ( tmp );
}

Fixed	&Fixed::operator--( void )
{
	_fixedNb--;
	return ( *this );
}

Fixed	Fixed::operator--( int )
{
	Fixed tmp( *this );
	
	_fixedNb--;
	return ( tmp );
}

// ---------- COMPARISON OPERATORS ----------

bool	Fixed::operator>( const Fixed &other ) const
{
	return( getRawBits() > other.getRawBits() );
}

bool	Fixed::operator<( const Fixed &other ) const
{
	return( getRawBits() < other.getRawBits() );
}

bool	Fixed::operator>=( const Fixed &other ) const
{
	return( getRawBits() >= other.getRawBits() );
}

bool	Fixed::operator<=( const Fixed &other ) const
{
	return( getRawBits() <= other.getRawBits() );
}

bool	Fixed::operator==( const Fixed &other ) const
{
	return ( getRawBits() == other.getRawBits() );
}

bool	Fixed::operator!=( const Fixed &other ) const
{
	return ( getRawBits() != other.getRawBits() );
}

// ---------- OPERATOR << ----------

std::ostream	&operator<<( std::ostream &o, const Fixed &rhs )
{
	o << rhs.toFloat();
	return ( o );
}
