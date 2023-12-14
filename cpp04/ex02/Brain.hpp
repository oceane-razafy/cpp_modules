/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:51:38 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/07 13:24:52 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{
	public:
					Brain(void);
					Brain(const Brain &other);
		Brain		&operator=(const Brain &other);
					~Brain(void);
		
		std::string	getIdea(int indexIdea) const;
		void		setIdea(int indexIdea, std::string ideaValue);

	private:
		std::string _ideas[100];
};

#endif