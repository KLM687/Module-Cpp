/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:16:20 by flee              #+#    #+#             */
/*   Updated: 2022/04/29 10:16:21 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
public:
Awesome (void) : _n(42 ) { return; }

int get( void ) const { return this->_n; }

private:

int _n;

};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x) { std::cout << x << std::endl; return; }

int main(void)
{
	int tab[] = { 0, 1, 2, 3, 4 }; // <--- | never understood why you can't write int[] tab. Wouldn't that make more sense?
	Awesome tab2[5];

	iter(tab, 5, print<int>);
	iter(tab2, 5, print<Awesome>);
	return 0;
}


/*int main (void)
{
	char ctab[] = "ABCDEFG";
	int  itab[] = {0,1,2,3,4,5,6,7};
	
	Iter(&ctab, 8, print<char>);
	Iter(&itab, 8, print<int>);
}*/