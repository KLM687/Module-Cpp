/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:53:45 by flee              #+#    #+#             */
/*   Updated: 2022/04/15 12:53:46 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Form
{
private:
	
	std::string const	_name;
	bool				_sign;
	int 		const	_w_grade;
	int			const	_x_grade;

public:
	
	std::string getName(void) const;
	bool 		getSign(void) const;
	int			getWgrade(void) const;
	int 		getXgrade(void) const;
	void		testGrade(void) const;
	void		beSigned(Bureaucrat const & A);
	void		signForm(std::string name) const;
	
	class GradeTooHighException: public std::exception
	{
		public:
  		virtual const char* what() const throw()
  		{
   	 		return "GradeTooHighException";
  		}
	}GradeTooHighException;

	class GradeTooLowException: public std::exception
	{
		public:
  		virtual const char* what() const throw()
  		{
   	 		return "GradeTooLowException";
  		}
	}GradeTooLowException;

	Form(void);
	Form(std::string name, int Wgrade, int Xgrade);
	Form(Form const & src);
	~Form(void);

	Form operator=(Form const & rhs);
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
