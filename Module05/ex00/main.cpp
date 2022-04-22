/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:12:33 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:12:36 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) 
{

	try
	{
		Bureaucrat a("A", 1);
		//Bureaucrat b("B", 150);
		//Bureaucrat c("C", 143);
		//Bureaucrat d("D", 1000);
		//Bureaucrat e("E", -1000);
		//Bureaucrat f("F", 0);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	/*std::cout << "----------- OVERLOAD << ---------------------" << std::endl;
	
	std::cout << a;
	std::cout << b;
	std::cout << c;

	std::cout << "----------- UPGRADE/DOWNGRADE ----------------" << std::endl;
	
	a.downGrade(150);
	b.upGrade(10);
	c.upGrade(1000);*/
}
