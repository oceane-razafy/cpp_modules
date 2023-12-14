/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:57:05 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/02 00:57:09 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iostream>
# include <stdexcept>

class Contact
{
	public:
					Contact(void);
					~Contact(void);
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;
		void		setFirstName(std::string value);
		void		setLastName(std::string value);
		void		setNickname(std::string value);
		void		setPhoneNumber(std::string value);
		void		setDarkestSecret(std::string value);
		int			initInfo(void);

	private:
		std::string	_firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string	_darkestSecret;
		bool		_errorFlag;
		void		_getUserInput(std::string field);
		void		_handlingEachFieldInput(std::string field, std::string userInput);

};

#endif