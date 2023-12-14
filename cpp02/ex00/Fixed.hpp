/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:16:08 by orazafy           #+#    #+#             */
/*   Updated: 2023/10/29 01:58:52 by orazafy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	public:
				Fixed( void );
				Fixed( const Fixed &other );
		Fixed 	&operator=( const Fixed &other );
				~Fixed( void );

		int 	getRawBits( void ) const;
		void 	setRawBits( int const raw );
		
	private:
		int					_fixedNb;
		static const int 	_nbFractBits = 8;
};

#endif