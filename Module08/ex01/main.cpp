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
	srand (time(NULL));
	try
	{	
		Span sp = Span(5);
		//sp.random();
		//sp.printVec();
		sp.addNumber(-100);
		sp.addNumber(100);
		//sp.addNumber(17);
		//sp.addNumber(9);
		//sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
	}
}