/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 09:41:23 by flee              #+#    #+#             */
/*   Updated: 2022/04/29 09:41:24 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "awesome.hpp"

template<typename T>
T const & max (T const & x, T const & y)
{
	return (x >= y ? x : y);
}

template<typename T>
T const & min (T const & x, T const & y)
{
	return (x <= y ? x : y);
}

template<typename T>
void swap (T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

int main(void)
{
	Awesome a(2), b(4);

	swap(a, b);
	std::cout << a << " " << b << std::endl;
	std::cout << max(a, b) << std::endl;

}

/*int main (int argc, char **argv)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	std::cout << ">>>>My teeeeeeeeeeeest<<<<" << std::endl;	
	
	if (argc != 3)
	{
		std::cout << "need 2 args" << std::endl;
		return 1;
	}

	std::cout << std::endl;
	std::cout << "max is " << max(argv[1],argv[2]) << std::endl;
	std::cout << "min is " << min(argv[1],argv[2]) << std::endl;
	std::cout << std::endl;
	std::cout << "argv[1] = " << argv[1] << std::endl;
	std::cout << "argv[2] = " << argv[2] << std::endl;
	std::cout << "-------SWAAAAAP--------" << std::endl;
	swap(argv[1], argv[2]);
	std::cout << "argv[1] = " << argv[1] << std::endl;
	std::cout << "argv[2] = " << argv[2] << std::endl;
	std::cout << std::endl;
}*/