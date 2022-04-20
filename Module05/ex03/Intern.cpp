/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:26:00 by flee              #+#    #+#             */
/*   Updated: 2022/04/19 15:26:02 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

AForm *Intern::robotomy(std::string target)
{
	AForm *robo = new RobotomyRequestForm(target);
	return (robo);
}

AForm *Intern::Presidential(std::string target)
{
	AForm *presi = new PresidentialPardonForm(target);
	return (presi);
}

AForm *Intern::Shrubbery(std::string target)
{
	AForm *bery = new ShrubberyCreationForm(target);
	return (bery);
}

Intern::Intern(void)
{
	array[0] = &Intern::robotomy;
	array[1] = &Intern::Presidential;
	array[2] = &Intern::Shrubbery;
}

Intern::Intern(Intern const & src)
{
	(void)src;
}

Intern::~Intern(void)
{
}

AForm *Intern::makeForm(std::string form, std::string target)
{
	AForm	*form_ret = NULL;
	std::string	request[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (form == request[i])
			form_ret = (*this.*array[i])(target);	
	}
	if (form_ret)
		std::cout << "Intern creates " << *form_ret;
	else
		std::cout << "Please enter a correct request" << std::endl;
	return (form_ret);
}


Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}