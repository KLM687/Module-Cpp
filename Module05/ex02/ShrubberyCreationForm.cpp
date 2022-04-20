/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 15:56:03 by flee              #+#    #+#             */
/*   Updated: 2022/04/15 15:56:04 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iomanip>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) :  AForm("Default", 145, 137)
{
	this->_target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src.getName(), src.getWgrade(), src.getXgrade())
{
	this->_target = src._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void)
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	tree = 
"          &&& &&  & &&				\n"
"      && &&  & ()|/ @, &&			\n"
"      & (/&/&||/& /_/)_&/_&		\n"
"   &() & &|()|/&  '% & ()	&		\n"	
"  &_/_&&_/ |& |&&/&__%_/_& &&		\n"
"&&   && & &| &| /& & % ()& /&&		\n"
" ()&_---()&///&&-&&--%---()~		\n"
"     &&     /|||					\n"
"             |||					\n"
"             |||					\n"
"             |||					\n"
"       , -=-~  .-^- _				\n";

	try
	{
		if (!getSign())
			throw UnsignException;
		else if (executor.getGrade() > getXgrade())
			throw  GradeTooLowException;
		else
		{
			std::cout << executor.getName() << " execute ShrubberyForm" << std::endl;
			std::string tmp = this->_target + "_Shrubbery";
			char const* ca = tmp.c_str();
			std::ofstream file;
			file.open(ca, std::ofstream::out | std::ofstream::trunc);	
			if (!file.is_open())
			{
				std::cout << "Opening file failed !" << std::endl;
				return ;
			}
			file << tree;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Bureaucrat " << executor.getName() << " problem is " << e.what() << std::endl;
	}
}