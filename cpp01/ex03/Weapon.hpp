/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 20:54:53 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/16 21:59:55 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:
							Weapon(std::string type);
							~Weapon(void);
		const std::string	&getType(void) const;
		void				setType(std::string value);

	private:
		std::string	_type;
};

#endif