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

static AForm *robotomy(std::string target)
{
	AForm *robo = new RobotomyRequestForm(target);
	return (robo);
}

static AForm *Presidential(std::string target)
{
	AForm *presi = new PresidentialPardonForm(target);
	return (presi);
}

static AForm *Shrubbery(std::string target)
{
	AForm *bery = new ShrubberyCreationForm(target);
	return (bery);
}

Intern::Intern(void)
{
}

Intern::Intern(Intern const & src)
{
	(void)src;
}

Intern::~Intern(void)
{
}

AForm *makeForm(std::string form, std::string target)
{
	AForm	*form_ret = NULL;
	AForm	*(*ptr[3])(std::string target) = { robotomy, Presidential, Shrubbery};
	std::string	request[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	for (int i = 0; i < 3; i++)
	{
		if (form == request[i])
			form_ret = ptr[i](target);
	}
	if (form_ret)
		std::cout << "Intern creates " << *form_ret << std::endl;
	else
		std::cout << "Please enter a correct request" << std::endl;
	return (form_ret);
}


Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return (*this);
}