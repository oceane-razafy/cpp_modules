/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:44:03 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/03 18:18:14 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ================ DIAMONDTRAP TESTS ====================
const std::string COLOR = "\033[1;32m";
const std::string RESET = "\033[0m";

void printStatusPoints(const DiamondTrap &diamondTrap)
{
	std::cout << "Name: " << diamondTrap.getName() << std::endl;
	std::cout << "Hit Points: " << diamondTrap.getHitPoints() << std::endl;
	std::cout << "Energy Points: " << diamondTrap.getEnergyPoints() << std::endl;
	std::cout << "attackDamage: " << diamondTrap.getAttackDamage() << std::endl;
	std::cout << std::endl;
}

int main(void)
{
	{ // TEST : inheritance
		std::cout << COLOR << "=========== TEST OF INHERITANCE ===========" << std::endl;
		std::cout << std::endl;
		
		std::cout << "---------- Creation ----------" << std::endl;
		DiamondTrap DiamondTrap1("DIAMONDTRAP-1");
		printStatusPoints(DiamondTrap1);

		std::cout << "---------- whoAmI ----------" << std::endl;
		DiamondTrap1.whoAmI();
		printStatusPoints(DiamondTrap1);

		std::cout << "---------- attack('MONSTER') ----------" << std::endl;
		DiamondTrap1.attack("MONSTER");
		printStatusPoints(DiamondTrap1);

		std::cout << "---------- guardGate() ----------" << std::endl;
		DiamondTrap1.guardGate();
		printStatusPoints(DiamondTrap1);
		
		std::cout << "---------- highFivesGuys() ----------" << std::endl;
		DiamondTrap1.highFivesGuys();
		printStatusPoints(DiamondTrap1);

		std::cout << "---------- takeDamage(30) ----------" << std::endl;
		DiamondTrap1.takeDamage(30);
		printStatusPoints(DiamondTrap1);

		std::cout << "---------- beRepaired(50) ----------" << std::endl;
		DiamondTrap1.beRepaired(50);
		printStatusPoints(DiamondTrap1);

		std::cout << "---------- Test: not enough hit points ----------" << std::endl;
		DiamondTrap1.takeDamage(120);
		printStatusPoints(DiamondTrap1);

		DiamondTrap1.beRepaired(10);
		DiamondTrap1.attack("MONSTER");
		std::cout << std::endl;

		std::cout << "---------- DESTRUCTION ----------" << std::endl;
	}
	
	{ // TEST: canonical format
	
		std::cout << RESET << std::endl;
		
		std::cout << "================ CANONICAL FORMAT ================" << std::endl;
		std::cout << std::endl;
		
		std::cout << "---------- Test of constructor with parameter ----------" << std::endl;
		DiamondTrap DiamondTrap1("DiamondTrap1");
		printStatusPoints(DiamondTrap1);
		std::cout << std::endl;

		std::cout << "---------- Test of default constructor ----------" << std::endl;
		DiamondTrap DiamondTrap1Bis;
		printStatusPoints(DiamondTrap1Bis);
		std::cout << std::endl;

		std::cout << "---------- Test of copy assignment ----------" << std::endl;
		DiamondTrap1Bis = DiamondTrap1;
		printStatusPoints(DiamondTrap1Bis);
		std::cout << std::endl;

		std::cout << "---------- Test of copy constructor ----------" << std::endl;
		DiamondTrap DiamondTrap1Ter(DiamondTrap1);
		printStatusPoints(DiamondTrap1Ter);
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
