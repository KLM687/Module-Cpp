/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:14:01 by flee              #+#    #+#             */
/*   Updated: 2022/04/04 13:14:02 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << "----mytest----" << std::endl;
	const Fixed r(10);
	const Fixed l(2);
	std::cout << "r = " << r.toFloat() << " l = " << l.toFloat() << std::endl;
	std::cout << "r+l = " << r+l << std::endl;
	std::cout << "r-l = " << r-l << std::endl;
	std::cout << "r/l = " << r/l << std::endl;
	std::cout << "r*l = " << r*l << std::endl;
	if (r < l)
		std::cout << "r < l" << std::endl;
	if (r <= l)
		std::cout << "r <= l" << std::endl;
	if (r > l)
		std::cout << "r < l" << std::endl;
	if (r >= l)
		std::cout << "r <= l" << std::endl;
	if (r == l)
		std::cout << "r == l" << std::endl;
	if (r != l)
		std::cout << "r != l" << std::endl;
	std::cout << "min is " << Fixed::min( r, l ) << std::endl;
	std::cout << "max is " << Fixed::max( r, l ) << std::endl;
	return 0;
}