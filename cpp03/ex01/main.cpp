/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:44:03 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/03 16:14:57 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ================ SCAVTRAP TESTS ====================
const std::string COLOR = "\033[1;32m";
const std::string RESET = "\033[0m";

void printStatusPoints(const ScavTrap &scavTrap)
{
	std::cout << "Name: " << scavTrap.getName() << std::endl;
	std::cout << "Hit Points: " << scavTrap.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << scavTrap.getEnergyPoints() << std::endl;
	std::cout << "attackDamage: " << scavTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
}

int main(void)
{
	{ // TEST : inheritance/polymorphisme
		std::cout << COLOR << "=========== TEST OF INHERITANCE/POLYMORPHISM ===========" << std::endl;
		std::cout << std::endl;
		
		std::cout << "---------- Creation ----------" << std::endl;
		ScavTrap scavTrap1("SCAVTRAP-1");
		printStatusPoints(scavTrap1);

		std::cout << "---------- attack('MONSTER') ----------" << std::endl;
		scavTrap1.attack("MONSTER");
		printStatusPoints(scavTrap1);
		
		std::cout << "---------- guardGate() ----------" << std::endl;
		scavTrap1.guardGate();
		printStatusPoints(scavTrap1);

		std::cout << "---------- takeDamage(30) ----------" << std::endl;
		scavTrap1.takeDamage(30);
		printStatusPoints(scavTrap1);

		std::cout << "---------- beRepaired(50) ----------" << std::endl;
		scavTrap1.beRepaired(50);
		printStatusPoints(scavTrap1);

		std::cout << "---------- Test: not enough hit points ----------" << std::endl;
		scavTrap1.takeDamage(120);
		printStatusPoints(scavTrap1);

		scavTrap1.beRepaired(10);
		scavTrap1.attack("MONSTER");
		std::cout << std::endl;

		std::cout << "---------- DESTRUCTION ----------" << std::endl;
	}
	
	{ // TEST: canonical format
	
		std::cout << RESET << std::endl;
		
		std::cout << "================ CANONICAL FORMAT ================" << std::endl;
		std::cout << std::endl;
		
		std::cout << "---------- Test of constructor with parameter ----------" << std::endl;
		ScavTrap scavTrap1("scavTrap1");
		printStatusPoints(scavTrap1);
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		ScavTrap scavTrap1Bis;
		printStatusPoints(scavTrap1Bis);
		std::cout << std::endl;

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		scavTrap1Bis = scavTrap1;
		printStatusPoints(scavTrap1Bis);
		std::cout << std::endl;

		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		ScavTrap scavTrap1Ter(scavTrap1);
		printStatusPoints(scavTrap1Ter);
		std::cout << std::endl;

		std::cout << "---------- DESTRUCTION ----------" << std::endl;
	}
	
	return (0);
}

// // ============= CLAPTRAP TESTS =================
// const std::string GREEN = "\033[1;32m";
// const std::string CYAN = "\033[1;36m";
// const std::string RESET = "\033[0m";

// void printStatusPoints(const ClapTrap &clapTrap)
// {
// 	std::cout << "Name: " << clapTrap.getName() << std::endl;
// 	std::cout << "Hit Points: " << clapTrap.getHitPoints() << std::endl;
// 	std::cout << "Energy Points: " << clapTrap.getEnergyPoints() << std::endl;
// 	std::cout << "attackDamage: " << clapTrap.getAttackDamage() << std::endl;
// 	std::cout << std::endl;
// }

// int	main(void)
// {
// 	{ // TESTS: member functions + not enough hit points test
// 		std::cout << GREEN << "================ TESTS: MEMBER FUNCTIONS + NOT ENOUGH HIT POINTS ================" << std::endl;
// 		std::cout << std::endl;
		
// 		std::string		name1 = "CLAPTRAP-1";
// 		std::string		name2 = "ENEMY";
		
// 		std::cout << "-------------------- Creation --------------------" << std::endl;
// 		ClapTrap clapTrap1(name1);
// 		printStatusPoints(clapTrap1);

// 		std::cout << "----------- Test of attack('ENEMY') function -----------" << std::endl;
// 		clapTrap1.attack(name2);
// 		printStatusPoints(clapTrap1);
		
// 		std::cout << "---------- Test of takeDamage(8) function ---------" << std::endl;
// 		clapTrap1.takeDamage(8);
// 		printStatusPoints(clapTrap1);

// 		std::cout << "---------- Test of beRepaired(2) function ----------" << std::endl;
// 		clapTrap1.beRepaired(2);
// 		printStatusPoints(clapTrap1);

// 		std::cout << "---------- Test: not enough hit points ----------" << std::endl;
// 		clapTrap1.takeDamage(11);
// 		printStatusPoints(clapTrap1);

		
// 		clapTrap1.beRepaired(10);
// 		clapTrap1.attack(name1);
// 		std::cout << std::endl;

// 		std::cout << "-------------------- Destruction --------------------" << std::endl;
// 	}
	
// 	{ // TEST: not enough energy points
// 		std::cout << std::endl;
// 		std::cout << CYAN << "================ TEST: NOT ENOUGH ENERGY POINTS ================" << std::endl;
// 		std::cout << std::endl;
		
// 		std::string		name1 = "BRUTE-CLAPTRAP";
// 		std::string		name2 = "ENEMY";
		
// 		std::cout << "---------- Test: BRUTE-CLAPTRAP does not have enough energy points ----------" << std::endl;
// 		ClapTrap clapTrapBrute(name1);
// 		for (int i = 0; i < 11; i++)
// 		{
// 			clapTrapBrute.attack(name2);
// 			if (i == 10)
// 				break ;
// 			std::cout << "BRUTE_CLAPTRAP's Energy Points: " << clapTrapBrute.getEnergyPoints() << std::endl;
// 			if (i == 9)
// 				std::cout << "WARNING: ClapTrap1 has just finished its energy points." << std::endl;
// 		}
// 		clapTrapBrute.beRepaired(2);
// 		std::cout << std::endl;
		
// 		std::cout << "-------------------- Destruction --------------------" << std::endl;
// 	}
// 	{ // TEST : canonical class format
// 		std::cout << std::endl;
// 		std::cout << RESET << "===================== CANONICAL FORMAT =====================" << std::endl;
// 		std::cout << std::endl;
		
// 		std::cout << "------- Test of constructor with parameter 'clapTrap1' -------" << std::endl;
// 		ClapTrap clapTrap1("clapTrap1");
// 		printStatusPoints(clapTrap1);
// 		std::cout << std::endl;
		
// 		std::cout << "---------- Test of copy constructor ----------" << std::endl;
// 		ClapTrap clapTrap1Bis(clapTrap1);
// 		printStatusPoints(clapTrap1Bis);
// 		std::cout << std::endl;
		
// 		std::cout << "---------- Test of default constructor ----------" << std::endl;
// 		ClapTrap clapTrap1Ter;
// 		printStatusPoints(clapTrap1Ter);
// 		std::cout << std::endl;

// 		std::cout << "---------- Test of copy assignment ----------" << std::endl;
// 		clapTrap1Ter = clapTrap1;
// 		printStatusPoints(clapTrap1Ter);
// 		std::cout << std::endl;
		
// 		std::cout << "-------------------- Destruction --------------------" << std::endl;
// 	}
// 	return (0);
// }
