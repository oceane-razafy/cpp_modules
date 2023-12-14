/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:33 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 18:59:06 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
							Cure(void);
							Cure(const Cure &other);
		Cure				&operator=(const Cure &other);
		virtual				~Cure(void);
	
		virtual AMateria	*clone(void) const;
		void				use(ICharacter& target);
};

#endif