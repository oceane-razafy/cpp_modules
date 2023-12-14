/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkStream.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:24:37 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/18 03:57:09 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	checkStream(std::ifstream *ifs, std::ofstream *ofs, int *exitStatus)
{
	if (ifs != NULL && (*ifs).fail())
	{
		std::cerr << "ERROR: Unable to read data from the input file" << std::endl;
		*exitStatus = 1;
	}
	if (ofs != NULL && (*ofs).fail())
	{
		std::cerr << "ERROR: Unable to write data to the output file" << std::endl;
		*exitStatus = 1;
	}
	return (*exitStatus);
}
