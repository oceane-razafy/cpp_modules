/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:53:39 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/09 16:42:42 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

void	testPdf(void);
void	moreTests(void);

int main(void)
{
	testPdf();
	moreTests();
}

void	testPdf(void) 
{
	std::cout << std::endl;
	std::cout << "================== TEST asked by the subject ==================" << std::endl;
	std::cout << std::endl;
	
	{
		Weapon  club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	} 
	{
		Weapon  club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}


void	moreTests(void) 
{
	std::cout << std::endl;
	std::cout << "================== MORE TESTS ==================" << std::endl;
	std::cout << std::endl;
	
	{
		std::cout << "---------- TEST Human B: no weapon to attack with ---------------------" << std::endl;
		Weapon  club = Weapon("crude spiked club");
		HumanB jim("Jim");
		// jim.setWeapon(club); // no weapon set
		jim.attack();
		// jim.setWeapon(club);
		// jim.attack();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "----------TEST Human A: no weapon name---------------------------------" << std::endl;
		Weapon  club = Weapon("");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("");
		bob.attack();
		std::cout << std::endl;
	} 
	{
		std::cout << "----------TEST Human A: no HUMAN name----------------------------------" << std::endl;
		Weapon  club = Weapon("weapon");
		HumanA bob("", club);
		bob.attack();
		std::cout << std::endl;
	}
	{
		std::cout << "----------TEST Human A: no HUMAN name, no weapon name------------------" << std::endl;
		Weapon  club = Weapon("");
		HumanA bob("", club);
		bob.attack();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "----------TEST Human B: no weapon name---------------------------------" << std::endl;
		Weapon  club = Weapon("");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		std::cout << std::endl;
	}
	{
		std::cout << "----------TEST Human B: no HUMAN name----------------------------------" << std::endl;
		Weapon  club = Weapon("weapon");
		HumanB jim("");
		jim.setWeapon(club);
		jim.attack();
		std::cout << std::endl;
	} 
	{
		std::cout << "----------TEST Human B: no HUMAN name, no weapon name------------------" << std::endl;
		Weapon  club = Weapon("");
		HumanB jim("");
		jim.setWeapon(club);
		jim.attack();
		std::cout << std::endl;
	} 
}
