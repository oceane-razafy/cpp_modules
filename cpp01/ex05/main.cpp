/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:40:03 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/19 00:15:43 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;

	std::cout << std::endl;
	std::cout << "---------- TEST 0: DEBUG level -----------" << std::endl;
	harl.complain("DEBUG");
	
	std::cout << std::endl;
	std::cout << "---------- TEST 1: INFO level ------------" << std::endl;
	harl.complain("INFO");

	std::cout << std::endl;
	std::cout << "---------- TEST 2: WARNING level ---------" << std::endl;
	harl.complain("WARNING");
	
	std::cout << std::endl;
	std::cout << "---------- TEST 3: ERROR level -----------" << std::endl;
	harl.complain("ERROR");

	std::cout << std::endl;
	std::cout << "---------- TEST 4: Invalid level ---------" << std::endl;
	harl.complain("wrong");
	
	return (0);
}
