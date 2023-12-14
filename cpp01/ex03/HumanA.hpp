/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 21:13:36 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/23 16:18:28 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	public:
					HumanA(const std::string &name, Weapon &weapon);
					~HumanA(void);
		std::string	getName(void) const;
		void		attack(void) const;

	private:
		Weapon		&_weapon;
		std::string	_name;
};

#endif