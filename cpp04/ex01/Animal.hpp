/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:31:23 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 15:49:26 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal
{
	public:
						Animal(void);
						Animal(std::string type);
						Animal(const Animal &other);
		Animal			&operator=(const Animal &other);
		virtual			~Animal(void);

		std::string		getType(void) const;
		void			setType(const std::string &value);
		virtual void	makeSound(void) const;

	protected:
		std::string 	type;

};

#endif
