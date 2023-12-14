/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:19:06 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/06 20:28:45 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
					WrongCat(void);
					WrongCat(const WrongCat &other);
		WrongCat	&operator=(const WrongCat &other);
		virtual		~WrongCat(void);

		void		makeSound(void) const;
};

#endif