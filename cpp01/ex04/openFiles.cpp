/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   openFiles.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:23:39 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/20 00:02:29 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void openFiles(std::ifstream *ifs, std::ofstream *ofs, 
	std::string filename, std::string filenameReplace)
{
	(*ifs).open(filename.c_str());
	if (!(*ifs))
	{
		std::cerr << "ERROR: Problem occured while opening input file" << std::endl;
		exit (1);
	}
	(*ofs).open(filenameReplace.c_str());
	if (!(*ofs))
	{
		std::cerr << "ERROR: Problem occured while opening output file" << std::endl;
		(*ifs).close();
		if ((*ifs).fail())
			std::cerr << "ERROR: Unable to close the input stream" << std::endl;	
		exit (1);
	}
}