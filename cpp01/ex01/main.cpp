/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:22:05 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/17 01:50:26 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombies;
	int N;
	
	N = 5;
	std::cout << "---------------------TEST 0: positive N---------------------------------" << std::endl;
	std::cout << "CREATION OF A ZOMBIES HORDE (N: 5, names: ZOMBIE)" << std::endl;
	zombies = zombieHorde(N, "ZOMBIE");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	std::cout << std::endl;
	std::cout << "DESTRUCTION OF THE ZOMBIES HORDE (N: 5, names: ZOMBIE)'" << std::endl;
	delete [] zombies;

	std::cout << std::endl;
	std::cout << "---------------------TEST 1: negative N---------------------------------" << std::endl;
	N = -1;
	zombies = zombieHorde(N, "ZOMBIE");
	if (zombies == NULL)
		std::cerr << "Error while creating zombies horde" << std::endl;

	std::cout << std::endl;
	N = 5;
	std::cout << "---------------------TEST 2: empty zombie name---------------------------------" << std::endl;
	std::cout << "CREATION OF A ZOMBIES HORDE (N: 5, names: \"\")" << std::endl;
	zombies = zombieHorde(N, "");
	for (int i = 0; i < N; i++)
	{
		zombies[i].announce();
	}
	std::cout << std::endl;
	std::cout << "DESTRUCTION OF THE ZOMBIES HORDE (N: 5, names: \"\")'" << std::endl;
	delete [] zombies;

	return (0);
}