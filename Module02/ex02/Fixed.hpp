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
# include <math.h>

class Fixed
{
private:
	int					_number;
	static const int	_bits = 8;
public:

	Fixed(void);
	Fixed(const int nb);
	Fixed(const float);
	Fixed(Fixed const & src);
	~Fixed(void);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat(void)const;
	int		toInt(void)const;


	Fixed & operator=(Fixed const & rhs);
	
	bool  	operator<(Fixed const & rhs) const;
	bool  	operator>(Fixed const & rhs) const;
	bool  	operator<=(Fixed const & rhs) const;
	bool  	operator>=(Fixed const & rhs) const;
	bool  	operator==(Fixed const & rhs) const;
	bool  	operator!=(Fixed const & rhs) const;

	Fixed  	operator+(Fixed const & rhs)const;
	Fixed  	operator-(Fixed const & rhs)const;
	Fixed  	operator*(Fixed const & rhs)const;
	Fixed  	operator/(Fixed const & rhs)const;

	Fixed & operator++(void);
	Fixed 	operator++(int);
	Fixed & operator--(void);
	Fixed 	operator--(int);
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);
#endif