/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:53:53 by flee              #+#    #+#             */
/*   Updated: 2022/04/15 12:53:54 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("Default AForm"), _sign(false), _w_grade(130), _x_grade(100)
{
	testGrade();
}

AForm::AForm(std::string name, int Wgrade, int Xgrade) : _name(name), _sign(false), _w_grade(Wgrade), _x_grade(Xgrade)
{
	testGrade();
}

AForm::AForm(AForm const & src) : _name(src.getName()), _w_grade(src.getWgrade()), _x_grade(getXgrade()) 
{
	this->_sign = src.getSign();
	testGrade();
}

AForm::~AForm(void)
{
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

bool 		AForm::getSign(void) const
{
	return (this->_sign);
}

int 		AForm::getWgrade(void) const
{
	return (this->_w_grade);
}

int 		AForm::getXgrade(void) const
{
	return (this->_x_grade);
}

void		AForm::testGrade(void) const
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

void		AForm::beSigned(Bureaucrat const & A)
{	
	if (getSign())
	{
		std::cout << "AForm is already sign" << std::endl;
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
	signAForm(A.getName());
}

void 		AForm::signAForm(std::string name) const
{
	if (getSign())
		std::cout << name << " signed " << getName() << std::endl;
	if (!getSign())
		std::cout << name << " couldn't sign " << getName() << " because Grade is to low" << std::endl;	
}

AForm & AForm::operator=(AForm const & rhs)
{
	if (this != &rhs)
	{
		this->_sign = rhs.getSign();
	}
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, AForm const & rhs)
{
	o << rhs.getName() << " sign: " << rhs.getSign() << " Writable grade: " << rhs.getWgrade() << " Executable grade: "  << rhs.getXgrade() << std::endl;
	
	return (o);
}
