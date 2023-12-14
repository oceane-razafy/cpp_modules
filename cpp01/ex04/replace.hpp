/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 02:26:26 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/18 02:47:21 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP
# include <iostream>
# include <fstream>
# include <cstdlib>

int		checkStream(std::ifstream *ifs, std::ofstream *ofs, int *exitStatus);
void	closeFiles(std::ifstream *ifs, std::ofstream *ofs, int *exitStatus);
void	openFiles(std::ifstream *ifs, std::ofstream *ofs,
				std::string filename, std::string filenameReplace);
int		replace(std::string filename, std::string filenameReplace,
				std::string s1, std::string s2);

#endif