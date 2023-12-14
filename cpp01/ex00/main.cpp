/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 21:05:20 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/17 01:45:39 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;
	
	std::cout << "================FULL ZOMBIE NAME======================" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "TEST 1: newZombie function used with a name 'Zombie 1'" << std::endl;
	zombie = newZombie("Zombie 1");
	zombie->announce();
	delete zombie;
	
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "TEST 2: randomChump function used with a name 'Zombie 2'" << std::endl;
	randomChump("Zombie 2");

	std::cout << std::endl;
	std::cout << "===================EMPTY ZOMBIE NAME==================" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "TEST 3: newZombie function used with empty zombie name" << std::endl;
	zombie = newZombie("");
	zombie->announce();
	delete zombie;
	
	std::cout << "------------------------------------------------------" << std::endl;
	std::cout << "TEST 4: randomChump function used with empty zombie name" << std::endl;
	randomChump("");

	return (0);
}