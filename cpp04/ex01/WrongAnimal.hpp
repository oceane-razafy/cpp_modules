/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:19:01 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 16:09:29 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>
# include <iostream>

class WrongAnimal
{
	public:
						WrongAnimal(void);
						WrongAnimal(std::string type);
						WrongAnimal(const WrongAnimal &other);
		WrongAnimal		&operator=(const WrongAnimal &other);
		virtual			~WrongAnimal(void);

		std::string		getType(void) const;
		void			setType(const std::string &value);
		void			makeSound(void) const;

	protected:
		std::string 	type;
};

#endif