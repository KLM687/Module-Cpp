/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:23:31 by flee              #+#    #+#             */
/*   Updated: 2022/04/04 13:23:33 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
private:
	int					_number;
	static const int	_bits;
public:

	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

	Fixed & operator=(Fixed const & rhs);
};

#endif