/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:53:53 by flee              #+#    #+#             */
/*   Updated: 2022/04/15 12:53:54 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default Form"), _sign(false), _w_grade(130), _x_grade(100)
{
	testGrade();
}

Form::Form(std::string name, int Wgrade, int Xgrade) : _name(name), _sign(false), _w_grade(Wgrade), _x_grade(Xgrade)
{
	testGrade();
}

Form::Form(Form const & src) : _name(src.getName()), _w_grade(src.getWgrade()), _x_grade(src.getXgrade())
{
	this->_sign = src.getSign();
	testGrade();
}

Form::~Form(void)
{
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool 		Form::getSign(void) const
{
	return (this->_sign);
}

int 		Form::getWgrade(void) const
{
	return (this->_w_grade);
}

int 		Form::getXgrade(void) const
{
	return (this->_x_grade);
}

void		Form::testGrade(void) const
{
	try
	{
		if ( this->_w_grade > 150 || this->_x_grade > 150)
			throw GradeTooHighException;
		else if ( this->_w_grade < 1|| this->_x_grade < 1)
			throw GradeTooLowException;
	}
	catch (std::exception& e)
	{
		std::cout << this->getName() << " " << e.what() << std::endl;
	}

}

void		Form::beSigned(Bureaucrat const & A)
{	
	if (getSign())
	{
		std::cout << "Form is already sign" << std::endl;
		return;
	}
	try
	{
		if (A.getGrade() <= getWgrade())
			this->_sign = true;	
		else
			throw GradeTooLowException;		
	}
	catch (std::exception& e)
	{
		std::cout << A.getName() << " " << e.what() << " for sign !" << std::endl;
	}
	signForm(A.getName());
}

void 		Form::signForm(std::string name) const
{
	if (getSign())
		std::cout << name << " signed " << getName() << std::endl;
	if (!getSign())
		std::cout << name << " couldn't sign " << getName() << " because Grade is to low" << std::endl;	
}

Form Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		this->_sign = rhs.getSign();
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	o << rhs.getName() << " sign: " << rhs.getSign() << " Writable grade: " << rhs.getWgrade() << " Executable grade: "  << rhs.getXgrade() << std::endl;
	
	return (o);
}
