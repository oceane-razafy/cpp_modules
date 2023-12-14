/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:22 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 16:35:32 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include "ICharacter.hpp"
# include <string>
# include <iostream>

class ICharacter;

class AMateria
{
	public:
							AMateria(void);
							AMateria(const std::string &type);
							AMateria(const AMateria &other);
		AMateria			&operator=(const AMateria &other);
		virtual				~AMateria(void);
		
		const std::string	&getType(void) const; //Returns the materia type
		void				setType(const std::string &value);

		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string			type;
};

#endif