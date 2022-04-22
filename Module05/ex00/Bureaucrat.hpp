/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:02:09 by flee              #+#    #+#             */
/*   Updated: 2022/04/15 11:02:10 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <stdexcept>

class Bureaucrat
{
private:
	std::string const _name;
	int 			  _grade;
public:

	std::string getName(void) const;
	int 		getGrade(void) const;
	void		upGrade(int rank);
	void 		downGrade(int rank);
	void		testGrade(void) const;
	
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

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	~Bureaucrat(void);

	Bureaucrat operator=(Bureaucrat const & rhs);
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
