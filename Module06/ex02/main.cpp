/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:02:14 by flee              #+#    #+#             */
/*   Updated: 2022/04/28 21:02:16 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

int main (void)
{
	std::srand (time(NULL));
	
	std::cout << std::endl;
	
	Base *base = generate();
	Base *base1 = generate();
	Base *base2 = generate();
	Base &base3 = *base;
	Base &base4 = *base1;
	Base &base5 = *base2;
	
	std::cout << std::endl;
	
	std::cout << "--identify with *--" << std::endl;
	identify(base);
	identify(base1);
	identify(base2);
	std::cout << "--identify with &--" << std::endl;
	identify(base3);
	identify(base4);
	identify(base5);

	std::cout << std::endl;
	delete base;
	delete base1;
	delete base2;
}

Base *generate(void)
{
	int random_base = std::rand() % 3;
	if (random_base == 0)
	{
		Base *a = new A;
		std::cout << "generate a new A" << std::endl;
		return a;
	}
	if (random_base == 1)
	{
		Base *b = new B;
		std::cout << "generate a new B" << std::endl;
		return b;
	}	
	if (random_base == 2)
	{
		Base *c = new C;
		std::cout << "generate a new C" << std::endl;
		return c;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "It's A BAAAASE" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "It's B BAAAASE" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "It's C BAAAASE" << std::endl;
	else
		std::cout << "We got a problem" << std::endl;
}

void identify(Base &p)
{
	try 
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "It's A BAAAASE" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) 
	{
	}
	try 
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "It's B BAAAASE" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) 
	{
	}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "It's C BAAAASE" << std::endl;
		return ;
	}
	catch (std::bad_cast &bc) 
	{
	}
}