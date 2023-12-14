/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:14 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 18:15:30 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	public:
				Dog(void);
				Dog(const Dog &other);
		Dog		&operator=(const Dog &other);
		virtual	~Dog(void);

		void	makeSound(void) const;
};

#endif