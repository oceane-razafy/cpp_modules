/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:08:28 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 19:05:36 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include <string>
class Character : public ICharacter
{
	public:
							Character(void);
							Character(const std::string &name);
							Character(const Character &other);
		Character			&operator=(const Character &other);
							~Character(void);

		std::string const 	&getName(void) const;
		AMateria			**getInventory(void);
		void				setName(const std::string &name);
		void 				equip(AMateria *m);
		void 				unequip(int idx);
		void				use(int idx, ICharacter& target);
	
	private:
		std::string			_name;
		AMateria			*_inventory[4];
};

#endif