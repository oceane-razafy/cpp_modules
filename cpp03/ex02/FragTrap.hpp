/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:27:38 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/06 17:10:29 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
					FragTrap(void);
					FragTrap(const std::string &name);
					FragTrap(const FragTrap &other);
		FragTrap	&operator=(const FragTrap &other);
					~FragTrap(void);

    void			highFivesGuys(void);
};

#endif
