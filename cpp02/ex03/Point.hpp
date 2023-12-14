/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:27:00 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/29 02:03:30 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public:
					Point( void );
					Point( const float x, const float y );
					Point( const Point &other );
		Point		&operator=( const Point &other );
					~Point( void );

		const Fixed	&getX( void ) const;
		const Fixed	&getY( void ) const;

	private:
		const Fixed	_x;
		const Fixed	_y;
};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif