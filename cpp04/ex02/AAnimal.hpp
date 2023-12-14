/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:28:28 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/16 15:49:26 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <string>
# include <iostream>

class AAnimal
{
	public:
						AAnimal(void);
						AAnimal(std::string type);
						AAnimal(const AAnimal &other);
		AAnimal			&operator=(const AAnimal &other);
		virtual			~AAnimal(void);

		std::string		getType(void) const;
		void			setType(const std::string &value);
		virtual void	makeSound(void) const = 0;

	protected:
		std::string 	type;

};

#endif
