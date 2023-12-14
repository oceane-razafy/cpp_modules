/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:25:19 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/19 23:15:05 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int	replace(std::string filename, std::string filenameReplace, 
		std::string s1, std::string s2)
{
	int				exitStatus;
	std::ifstream 	ifs;
	std::ofstream 	ofs;
	std::string 	line;
	size_t			pos;

	exitStatus = 0;
	openFiles(&ifs, &ofs, filename, filenameReplace);
	while (std::getline(ifs, line))
	{
		pos = 0;
		if (checkStream(&ifs, NULL, &exitStatus) == 1)
			break ;
		while (!s1.empty())
		{
			pos = line.find(s1, pos);
			if (pos == std::string::npos)
				break ;
			line.erase(pos, s1.length());
			if (!s2.empty())
			{
				line.insert(pos, s2);
				pos = pos + s2.length();
			}	
		}
		if (!ifs.eof())
			line = line + "\n";
		ofs << line;
		if (checkStream(NULL, &ofs, &exitStatus) == 1)
			break ;
	}
	closeFiles(&ifs, &ofs, &exitStatus);
	return (exitStatus);
}