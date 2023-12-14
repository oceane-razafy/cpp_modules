/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:48 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/09 15:15:04 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
						MateriaSource(void);
						MateriaSource(const MateriaSource &other);
		MateriaSource	&operator=(const MateriaSource &other);
						~MateriaSource(void);

						
		AMateria		**getMaterias(void);
		void			setMateria(int idx, AMateria *m);
		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const &type);
	
	private:
		AMateria		*_materias[4];
};

#endif