/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:14 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 18:19:00 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
				Dog(void);
				Dog(const Dog &other);
		Dog		&operator=(const Dog &other);
		virtual	~Dog(void);

		Brain 	*getBrain(void) const;
		void	makeSound(void) const;
	
	private:
		Brain 	*_brain;
};

#endif