/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:40:03 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/23 16:13:13 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	printLevelNames(std::string levelName)
{
	std::cout << "[ " << levelName << " ]" << std::endl;
}

int	main(int argc, char **argv)
{
	Harl 		harl;
	std::string	levelNames[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			level = 0;
	
	if (argc != 2)
	{
		std::cerr << "ERROR: Invalid number of arguments" << std::endl;
		return (1);
	}
	while (level < 4)
	{
		if (argv[1] == levelNames[level])
			break ;
		level++;
	}
	switch (level) 
	{
		case 0:
			printLevelNames(levelNames[0]);
			harl.complain(levelNames[0]);
			std::cout << std::endl;
			// Intentional fallthrough
		case 1:
			printLevelNames(levelNames[1]);
			harl.complain(levelNames[1]);
			std::cout << std::endl;
			// Intentional fallthrough
		case 2:
			printLevelNames(levelNames[2]);
			harl.complain(levelNames[2]);
			std::cout << std::endl;
			// Intentional fallthrough
		case 3:
			printLevelNames(levelNames[3]);
			harl.complain(levelNames[3]);
			std::cout << std::endl;
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}
