/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:22:40 by flee              #+#    #+#             */
/*   Updated: 2022/04/19 12:22:42 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(void) :  AForm("Default", 72, 45)
{
	this->_target = "Default";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src.getName(), src.getWgrade(), src.getXgrade())
{
	this->_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

std::string	RobotomyRequestForm::getTarget(void)
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!getSign())
			throw UnsignException;
		else if (executor.getGrade() > getXgrade())
			throw  GradeTooLowException;
		else
		{
			std::srand(time(NULL));
			int sucess = std::rand() % 2;
			std::cout << "Wrouuuuuuuum !" << std::endl;
			if (sucess)
				std::cout << executor.getName() << " successfully execute RobotomyForm" << std::endl;
			else
				std::cout << executor.getName() << " fail to execute RobotomyForm" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Bureaucrat " << executor.getName() << " problem is " << e.what() << std::endl;
	}
}
