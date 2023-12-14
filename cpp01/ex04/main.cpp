/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:05:38 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/19 23:15:27 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	std::string filename;
	std::string s1;
	std::string	s2;
	std::string filenameReplace;
	
	if (argc != 4)
	{
		std::cerr << "ERROR: Invalid number of arguments" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	filenameReplace = filename + ".replace";
	return (replace(filename, filenameReplace, s1, s2));
}