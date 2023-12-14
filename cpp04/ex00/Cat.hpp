/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:18 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 18:19:09 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public:
				Cat(void);
				Cat(const Cat &other);
		Cat 	&operator=(const Cat &other);
		virtual	~Cat(void);

	void		makeSound(void) const;	
};

#endif