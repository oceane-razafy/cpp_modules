/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:39 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 18:59:12 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
							Ice(void);
							Ice(const Ice &other);
		Ice					&operator=(const Ice &other);
		virtual				~Ice(void);

		virtual AMateria*	clone(void) const;
		void				use(ICharacter& target);	
};

#endif