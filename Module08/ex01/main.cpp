/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:44:27 by flee              #+#    #+#             */
/*   Updated: 2022/05/02 11:44:28 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main (void)
{

	try
	{	
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	/*try
	{
		Span test(10);
		test.addNumber(-1000);
		test.addNumber(-10);
		test.addNumber(-10000);
		test.addNumber(-50);
		test.addNumber(-100);
		test.addNumber(-200);
		test.addNumber(-400);
		test.shortestSpan();
		test.longestSpan();
		test.printVec();
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}*/
}