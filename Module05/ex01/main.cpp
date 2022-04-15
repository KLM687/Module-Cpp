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
#include "Form.hpp"

int main(void) 
{
	std::cout << "----- Exception High : grade > 140 ---- Exception Low : grade < 145 -----" << std::endl;

	Bureaucrat a("A", 1);
	Bureaucrat b("B", 150);
	Bureaucrat c("C", 143);
	
	Form F("F.A", 100, 50);
	Form G("F.G", 0 , 550);
	Form H("F.H", 1, 1);

	std::cout << F;
	F.beSigned(a);
	F.beSigned(b);
	H.beSigned(c);
	H.beSigned(a);


}
