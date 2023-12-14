/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:07:52 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/06 17:10:29 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
					DiamondTrap(void);
					DiamondTrap(const std::string &name);
					DiamondTrap(const DiamondTrap &other);
		DiamondTrap	&operator=(const DiamondTrap &other);
					~DiamondTrap(void);
		
		std::string	getName(void) const;
		void		whoAmI(void);
		
		using 		ScavTrap::attack;
		
	private:
		std::string _name;
};

#endif