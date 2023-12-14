/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:18 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 18:19:03 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
				Cat(void);
				Cat(const Cat &other);
		Cat 	&operator=(const Cat &other);
		virtual ~Cat(void);

	Brain		*getBrain(void) const;
	void		makeSound(void) const;	

	private:
		Brain 	*_brain;
};

#endif