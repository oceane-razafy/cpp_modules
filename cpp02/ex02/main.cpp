/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 19:34:27 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/09 16:30:29 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	testPdf( void );
void 	moreTests( void );


int main( void )
{
	testPdf();
	moreTests();
	return (0);
}

void	testPdf( void )
{
	std::cout << std::endl;
	std::cout << "================== TEST asked by the subject ==================" << std::endl;
	std::cout << std::endl;
	
	Fixed 		a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
}

void moreTests( void )
{
	std::cout << std::endl;
	std::cout << "================== MORE TESTS ==================" << std::endl;
	std::cout << std::endl;
	
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );

	
	std::cout << "---------- STATIC / NON STATIC FUNCTIONS ----------" << std::endl;
	
	std::cout << "a is 1234.43" << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << std::endl;
	
	std::cout << "b is 10" << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << std::endl;

	std::cout << "10" << std::endl;
	std::cout << Fixed::min( a, b) << std::endl;
	std::cout << std::endl;

	std::cout << "1234.43" << std::endl;
	std::cout << Fixed::max ( a, b ) << std::endl;
	std::cout << std::endl;

	std::cout << "c is 42.4219" << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << std::endl;

	std::cout << "d is 10" << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << std::endl;

	std::cout << "10" << std::endl;
	std::cout << Fixed::min( c, d) << std::endl;
	std::cout << std::endl;

	std::cout << "42.4219" << std::endl;
	std::cout << Fixed::max ( c, d ) << std::endl;
	std::cout << std::endl;

	std::cout << "a is 1234 as integer" << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << std::endl;

	std::cout << "b is 10 as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << std::endl;

	std::cout << "c is 42 as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << std::endl;

	std::cout << "d is 10 as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << std::endl;

	std::cout << "---------- INCREMENT/DECREMENT OPERATORS ----------" << std::endl;
	
	a = b + d;
	std::cout << "20" << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	a = b - d;
	std::cout << "0" << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	a = b * d;
	std::cout << "100" << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	a = b / d;
	std::cout << "1" << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "--------------- COMPARISON OPERATORS ---------------" << std::endl;
	// std::cout << "CHECK where we are" << std::endl;
	// std::cout << "a : " << a << std::endl;
	// std::cout << "b : " << b << std::endl;
	// std::cout << "c : " << c << std::endl;
	// std::cout << "d : " << d << std::endl;

	/*
	a : 1
	b : 10
	c : 42.4219
	d : 10
	*/
	if (a < b)
		std::cout << "good" << std::endl;
	else
		std::cout << "ERROR" << std::endl;
	
	if (a <= b)
		std::cout << "good" << std::endl;
	else
		std::cout << "ERROR" << std::endl;
	
	if (c > d)
		std::cout << "good" << std::endl;
	else
		std::cout << "ERROR" << std::endl;

	if (c >= d)
		std::cout << "good" << std::endl;
	else
		std::cout << "ERROR" << std::endl;
	
	if (b == d)
		std::cout << "good" << std::endl;
	else
		std::cout << "ERROR" << std::endl;
	
	if (b >= d)
		std::cout << "good" << std::endl;
	else
		std::cout << "ERROR" << std::endl;

	if (b <= d)
		std::cout << "good" << std::endl;
	else
		std::cout << "ERROR" << std::endl;

	if (b != d)
		std::cout << "ERROR" << std::endl;
	else
		std::cout << "good" << std::endl;
	
	// just to make sure
	if (a != d)
		std::cout << "good" << std::endl;
	else
		std::cout << "ERROR" << std::endl;
	

	std::cout << "--------------- INCREMENT/DECREMENT OPERATORS ---------------" << std::endl;

	Fixed nb;
	
	std::cout << "0" << std::endl;
	std::cout << nb << std::endl;
	std::cout << std::endl;

	std::cout << "0.00390625" << std::endl;
	std::cout << ++nb << std::endl;
	std::cout << std::endl;


	std::cout << "0.00390625" << std::endl;
	std::cout << nb << std::endl;
	std::cout << std::endl;

	std::cout << "0" << std::endl;
	std::cout << --nb << std::endl;
	std::cout << std::endl;

	std::cout << "0" << std::endl;
	std::cout << nb << std::endl;
	std::cout << std::endl;

	std::cout << "0" << std::endl;
	std::cout << nb++ << std::endl;
	std::cout << std::endl;

	std::cout << "0.00390625" << std::endl;
	std::cout << nb-- << std::endl;
	std::cout << std::endl;

	std::cout << "0" << std::endl;
	std::cout << nb << std::endl;
}