/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 12:53:45 by flee              #+#    #+#             */
/*   Updated: 2022/04/15 12:53:46 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"

class AForm
{
private:
	
	std::string const	_name;
	bool				_sign;
	int 				_w_grade;
	int					_x_grade;

public:
	
	std::string 	getName(void) const;
	bool 			getSign(void) const;
	int				getWgrade(void) const;
	int 			getXgrade(void) const;
	virtual void	testGrade(void) const;
	virtual void	beSigned(Bureaucrat const & A) = 0;
	void			signAForm(std::string name) const;
	void			executeForm(AForm const & Aform);
	
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

	AForm & operator=(AForm const & rhs);

	AForm(void);
	AForm(std::string name, int Wgrade, int Xgrade);
	AForm(AForm const & src);
	virtual ~AForm(void);

};

std::ostream &	operator<<(std::ostream & o, AForm const & rhs);

#endif
