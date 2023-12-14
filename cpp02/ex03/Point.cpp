/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:30:53 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/30 17:42:01 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point( void ) 
	:_x( 0 ),
	_y( 0 )
{
}

Point::Point ( const float x, const float y )
	: _x( x ),
	_y( y )
{
}

Point::Point( const Point &other ) 
	: _x( other._x ),
	_y( other._y )
{
}

Point	&Point::operator=( const Point &other )
{
	if (this != &other)
	{
		std::cerr << "ERROR: Copy assignment failed. Private attributes are constant." << std::endl;
	}
	return ( *this );
}

Point::~Point( void )
{
}

const Fixed	&Point::getX( void ) const
{
	return ( _x );
}

const Fixed	&Point::getY( void ) const
{
	return ( _y );
}
