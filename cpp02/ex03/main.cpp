/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:34:27 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/29 01:53:55 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main( void )
{

	{
		std::cout << "-------- INSIDE THE TRIANGLE TESTS ---------" << std::endl;
		Point 	a( 0, 0 );
		Point 	b( 4, 0 );
		Point 	c( 2, 3 );
		Point	point( 2, 1 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST1 : " << res << std::endl;
	}
	{
		Point a( 1, 1 );
		Point b( 5, 1 );
		Point c( 3, 4 );
		Point point( 4, 2 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST2 : " << res << std::endl;
	}
	{
		Point a( 2, 2 );
		Point b( 6, 2 );
		Point c( 4, 5 );
		Point point( 5, 3 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST3 : " << res << std::endl;
	}
	{
		Point a( 2, 2 );
		Point b( 4, 2 );
		Point c( 3, 3 );
		Point point( 3, 2.5 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST4 : " << res << std::endl;
	}
	{
		Point a( 3, 3 );
		Point b( 5, 3 );
		Point c( 4, 4 );
		Point point( 4, 3.5 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST5 : " << res << std::endl;

	}
	{
		Point a( 4, 4 );
		Point b( 6, 4 );
		Point c( 5, 5 );
		Point point( 5, 4.5 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST6 : " << res << std::endl;

	}
	{
		Point a( 0, 0 );
		Point b( 4, 0 );
		Point c( 2, 4 );
		Point point( 3, 0.01 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST7 : " << res << std::endl;
	}
	{
		std::cout << "-------- OUTSIDE THE TRIANGLE TESTS (edges cases) ---------" << std::endl;
		Point a( 0, 0 );
		Point b( 4, 0 );
		Point c( 2, 4 );
		Point point( 3, 0 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST1 : " << res << std::endl;
	}
	{
		Point a( 1, 1 );
		Point b( 5, 1 );
		Point c( 3, 5 );
		Point point( 3.5, 1 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST2 : " << res << std::endl;

	}
	{
		Point a( 2, 2 );
		Point b( 6, 2 );
		Point c( 4, 6 );
		Point point( 3, 4 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST3 : " << res << std::endl;
	}
	{
		Point a( 1, 1 );
		Point b( 5, 1 );
		Point c( 3, 5 );
		Point point( 4, 3 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST4 : " << res << std::endl;
	}
	{
		std::cout << "-------- OUTSIDE THE TRIANGLE TESTS (on the vertices) ---------" << std::endl;
		Point a( 0, 0 );
		Point b( 4, 0 );
		Point c( 2, 4 );
		Point point( 0, 0 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST1 : " << res << std::endl;
	}
	{
		Point a( 1, 1 );
		Point b( 5, 1 );
		Point c( 3, 5 );
		Point point( 5, 1 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST2 : " << res << std::endl;
	}
	{
		Point a( 2, 2 );
		Point b( 6, 2 );
		Point c( 4, 6 );
		Point point( 4, 6 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST3 : " << res << std::endl;
	}
	{
		std::cout << "-------- OUTSIDE THE TRIANGLE TESTS ---------" << std::endl;
		Point a( 0, 0 );
		Point b( 4, 0 );
		Point c( 2, 4 );
		Point point( 3, -0.01 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST1 : " << res << std::endl;
	}
	{
		Point a( 1, 1 );
		Point b( 5, 1 );
		Point c( 3, 5 );
		Point point( 6, 1 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST2 : " << res << std::endl;
	}
	{
		Point a( 2, 2 );
		Point b( 6, 2 );
		Point c( 4, 6 );
		Point point( 0, 0 );

		bool res = bsp( a, b, c, point );
		std::cout << "TEST3 : " << res << std::endl;
	}
	return (0 );
}

