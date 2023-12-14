/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:29:24 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/30 17:55:52 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
	: _fixedNb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=( const Fixed &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixedNb = other._fixedNb;
	return ( *this );
}

Fixed::Fixed( const int nb) 
	: _fixedNb( nb << _nbFractBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float nb ) 
	: _fixedNb( roundf( nb * (1 << _nbFractBits) ) )
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( _fixedNb );
}

void	Fixed::setRawBits( int const raw )
{
	_fixedNb = raw;
}

float	Fixed::toFloat( void ) const
{
	return ( static_cast<float> (_fixedNb)/ (1 << _nbFractBits) );
}

int		Fixed::toInt( void ) const
{
	return (_fixedNb >> _nbFractBits);
}

std::ostream &operator<<(std::ostream &o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return ( o );
}
