/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:45 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/09 15:36:22 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
	std::cout << "A MateriaSource has been created!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._materias[i] != NULL)
			_materias[i] = other._materias[i]->clone();
		else
			_materias[i] = NULL;
	}
	std::cout << "A MateriaSource has been created!" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materias[i] != NULL)
			{
				delete _materias[i];
				_materias[i] = NULL;
			}
			if (other._materias[i] != NULL)
				_materias[i] = other._materias[i]->clone();
		}	
	}
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL)
			delete _materias[i];
	}
	std::cout << "A MateriaSource has been destroyed!" << std::endl;
}

AMateria	**MateriaSource::getMaterias(void)
{
	return (_materias);
}

void	MateriaSource::setMateria(int idx, AMateria *m)
{
	if (idx >= 0 && idx < 4)
	{
		_materias[idx] = m;
		return ;
	}
	std::cerr << "ERROR: Index should be between 0 and 3" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Learn Materia failed: Materia does not exist" << std::endl;	
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] == NULL)
		{
			_materias[i] = m;
			std::cout << "Materia Source has now learned how to do " << m->getType() 
			<< ", copy placed in materias place n° " << i << "!" << std::endl;
			return ;
		}	
	}
	std::cout << "Learn Materia failed: Materias Source is full" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i] != NULL && _materias[i]->getType() == type)
		{
			std::cout << "Materia Source has successfully found the type " << type << " in its materias! ";
			std::cout << "Cloning is taking place now!" << std::endl;
			return (_materias[i]->clone());
		}
	}
	std::cout << "Clone Materia failed: type " << type << " has not been found in materias" << std::endl;
	return (NULL);
}
