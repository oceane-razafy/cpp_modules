/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:13:48 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/23 16:18:43 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	public:
					HumanB(const std::string &name);
					~HumanB(void);
		std::string	getName(void) const;
		void		setWeapon(Weapon &weapon);
		void		attack(void) const;

	private:
		Weapon 		*_weapon;
		std::string	_name;
};

#endif