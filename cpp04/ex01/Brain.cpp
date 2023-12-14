/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:51:34 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/07 14:58:11 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A Brain has been created!" << std::endl;
}

Brain::Brain(const Brain &other)
{
	for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	std::cout << "A Brain has been created!" << std::endl;
}

Brain	&Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = other._ideas[i];
	}	
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "A Brain has been destroyed!" << std::endl;
}

std::string Brain::getIdea(int indexIdea) const
{
	if (indexIdea < 0 || indexIdea > 99)
		throw std::invalid_argument("ERROR: Index should be within the range of 0 to 99");
	return (_ideas[indexIdea]);
}

void	Brain::setIdea(int indexIdea, std::string ideaValue)
{
	if (indexIdea < 0 || indexIdea > 99)
		throw std::invalid_argument("ERROR: Index should be within the range of 0 to 99");
	_ideas[indexIdea] = ideaValue;
}
