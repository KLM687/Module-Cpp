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

	Bureaucrat a("A", 1);
	Bureaucrat b("B", 150);
	Bureaucrat c("C", 143);

	std::cout << "----------- OVERLOAD << ---------------------" << std::endl;
	
	std::cout << a;
	std::cout << b;
	std::cout << c;

	std::cout << "----------- UPGRADE/DOWNGRADE ----------------" << std::endl;
	
	a.downGrade(150);
	b.upGrade(10);
	c.upGrade(1000);
}
