/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:02:17 by flee              #+#    #+#             */
/*   Updated: 2022/04/15 11:02:18 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150)
{
	testGrade();
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	testGrade();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	this->_name = src.getName();
	this->_grade = src.getGrade();
	testGrade();
}

Bureaucrat::~Bureaucrat(void)
{
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int 		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void		Bureaucrat::testGrade(void) const
{
	try
	{
		if (this->_grade < 140 || this->_grade < 1)
			throw GradeTooHighException;
		else if (this->_grade > 145)
			throw GradeTooLowException;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " " << e.what() << std::endl;
	}

}

void		Bureaucrat::upGrade(int rank)
{
	this->_grade -= rank;
	if (this->_grade <= 0)
		this->_grade = 1;
	std::cout << getName() << " Bureaucrat grade " << getGrade() << std::endl;
	testGrade();
}

void 		Bureaucrat::downGrade(int rank)
{
	this->_grade += rank;
	if (this->_grade > 150)
		this->_grade = 150;
	std::cout << getName() << " Bureaucrat grade " << getGrade() << std::endl;
	testGrade();
}

Bureaucrat Bureaucrat::operator=(Bureaucrat * rhs)
{
	this->_name = rhs->getName();
	this->_grade = rhs->getGrade();
	return (*this);
}

void Bureaucrat::execute(AForm const & form) const
{
	form.execute(*this);
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << " Bureaucrat grade " << rhs.getGrade () << std::endl;
	
	return (o);
}

