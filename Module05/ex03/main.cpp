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
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) 
{
	std::cout << "----- Exception High : grade > 140 ---- Exception Low : grade < 145 -----" << std::endl;

	Bureaucrat a("A", 1);
	Bureaucrat b("B", 150);
	Bureaucrat c("C", 143);

	ShrubberyCreationForm tata("tata");
	tata.beSigned(a);
	tata.execute(c);
	tata.execute(a);
	tata.execute(c);
	RobotomyRequestForm toto("oups");
	toto.execute(c);
	toto.beSigned(b);
	toto.beSigned(a);
	toto.execute(b);
	toto.execute(a);
	PresidentialPardonForm titi("baba");
	titi.beSigned(a);
	titi.execute(c);
	titi.execute(a);

	Intern  someRandomIntern;
    AForm*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf->getName();

}
