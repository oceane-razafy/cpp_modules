/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:18:58 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/29 01:51:12 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	dot( Point const &a, Point const &b )
{
	return ( a.getX() * b.getX() + a.getY() * b.getY() );
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	// Note: v0, v1 and v2 represent vectors
	Point v0( (b.getX() - a.getX()).toFloat(), (b.getY() - a.getY()).toFloat() );
	Point v1( (c.getX() - a.getX()).toFloat(), (c.getY() - a.getY()).toFloat() );
	Point v2( (point.getX() - a.getX()).toFloat(), (point.getY() - a.getY()).toFloat() );

	Fixed d00 = dot( v0, v0 );
    Fixed d01 = dot( v0, v1 );
    Fixed d11 = dot( v1, v1 );
    Fixed d20 = dot( v2, v0 );
    Fixed d21 = dot( v2, v1 );
    Fixed denom = d00 * d11 - d01 * d01;
    Fixed v = (d11 * d20 - d01 * d21) / denom;
    Fixed w = (d00 * d21 - d01 * d20) / denom;
    Fixed u = Fixed(1) - v - w;

	return ( u > Fixed(0) && u < Fixed(1) 
			&& v > Fixed(0) && v < Fixed(1) 
			&& w > Fixed(0) && w < Fixed(1) );
}