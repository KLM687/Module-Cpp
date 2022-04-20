/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:22:47 by flee              #+#    #+#             */
/*   Updated: 2022/04/19 12:22:48 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP
# include <iostream>
# include <cstring>
# include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
private:
	std::string		 _target;
public:

	void 		execute(Bureaucrat const & executor) const;
	std::string getTarget(void);
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
};

#endif