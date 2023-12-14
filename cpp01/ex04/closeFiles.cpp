/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closeFiles.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:24:12 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/18 02:31:33 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void closeFiles(std::ifstream *ifs, std::ofstream *ofs, int *exitStatus)
{
	(*ifs).clear();
	(*ifs).close();
	if ((*ifs).fail())
	{
		std::cerr << "ERROR: Unable to close the input stream" << std::endl;
		*exitStatus = 1;
	}
	(*ofs).clear();
	(*ofs).close();
	if ((*ofs).fail())
	{
		std::cerr << "ERROR: Unable to close the output stream" << std::endl;
		*exitStatus = 1;
	}
}
