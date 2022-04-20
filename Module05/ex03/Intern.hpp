/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:25:51 by flee              #+#    #+#             */
/*   Updated: 2022/04/19 15:25:52 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	static AForm *robotomy(std::string target);
	static AForm *Pressidential(std::string target);
	static AForm *Shrubbery(std::string target);
	Intern(void);
	Intern(Intern const & src);
	~Intern(void);

	AForm *makeForm(std::string form, std::string target);

	Intern & operator=(Intern const & rhs);
};

#endif
