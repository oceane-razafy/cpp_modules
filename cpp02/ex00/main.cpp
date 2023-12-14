/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:00:02 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/13 21:26:55 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	testPdf( void );
void	moreTests(void) ;

int main(void)
{
	testPdf();
	moreTests();
	return ( 0 );
}

void	testPdf( void ) 
{
	std::cout << std::endl;
	std::cout << "================== TEST asked by the subject ==================" << std::endl;
	std::cout << std::endl;
	
	Fixed a;
	Fixed b( a );
	Fixed c;
	
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

void	moreTests(void) 
{

	std::cout << std::endl;
	std::cout << "===================== MORE TESTS =====================" << std::endl;
	std::cout << std::endl;
	
	std::cout << "---------- Test of default constructor ----------" << std::endl;
	Fixed fixed;

	std::cout << std::endl;
	std::cout << "---------- Tests of setRawBits(10), getRawBits() ----------" << std::endl;
	fixed.setRawBits(10);
	std::cout << fixed.getRawBits() << std::endl;
	std::cout << std::endl;
	
	std::cout << "---------- Test of copy constructor ----------" << std::endl;
	Fixed fixed2(fixed);
	std::cout << fixed2.getRawBits() << std::endl;
	std::cout << std::endl;
	
	std::cout << "---------- Test of copy assignment ----------" << std::endl;
	Fixed fixed3;
	std::cout << "Before assigning 10, it's 0" << std::endl;
	std::cout << fixed3.getRawBits() << std::endl;
	std::cout << "We're gonna assign 10 to this new fixed object" << std::endl;
	fixed3 = fixed;
	std::cout << fixed3.getRawBits() << std::endl;
	std::cout << std::endl;
	
	std::cout << "-------------------- Destruction --------------------" << std::endl;
}