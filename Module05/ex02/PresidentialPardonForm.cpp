/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:11:59 by flee              #+#    #+#             */
/*   Updated: 2022/04/19 15:12:01 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iomanip>
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm(void) :  AForm("Default", 25, 5)
{
	this->_target = "Default";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src.getName(), src.getWgrade(), src.getXgrade())
{
	this->_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

std::string	PresidentialPardonForm::getTarget(void)
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!getSign())
			throw UnsignException;
		else if (executor.getGrade() > getXgrade())
			throw  GradeTooLowException;
		else
		{
			std::cout << executor.getName() << " execute PresidentialPardonForm !" << std::endl;
			std::cout << this->_target << " I, Zaphod Beeblebrox give you the absolution !" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Bureaucrat " << executor.getName() << " problem is " << e.what() << std::endl;
	}
}
