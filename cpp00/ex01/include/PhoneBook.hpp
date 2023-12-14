/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 00:57:14 by orazafy           #+#    #+#             */
/*   Updated: 2023/11/10 12:44:27 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

class PhoneBook
{
	public:
				PhoneBook(void);
				~PhoneBook(void);
		int		addContact(void);
		int		searchContact(void);

	private:
		Contact 	_contacts[8];
		int			_hasExistingContacts;
		int			_contactId;
		void		_displayAllContacts(Contact _contacts[8]) const;
		void		_displayContactInfo(Contact contact) const;
		int			_getUserIndexInput(void) const;
		std::string	_truncateFieldName(std::string info) const;
};

#endif
