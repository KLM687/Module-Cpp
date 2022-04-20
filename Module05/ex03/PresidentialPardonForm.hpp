/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:11:50 by flee              #+#    #+#             */
/*   Updated: 2022/04/19 15:11:54 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <cstring>
# include "AForm.hpp"

class AForm;

class PresidentialPardonForm : public AForm
{
private:
	std::string		 _target;
public:

	void 		execute(Bureaucrat const & executor) const;
	std::string getTarget(void);
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);
};

#endif