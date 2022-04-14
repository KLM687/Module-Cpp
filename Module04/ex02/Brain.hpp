/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:13:10 by flee              #+#    #+#             */
/*   Updated: 2022/04/13 17:13:12 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain
{
private:
	std::string	*ideas;
public:
	std::string *getIdeas(void);
	std::string  showIdea(void);
	void		 setIdeas(std::string name);
	std::string  getBrain(void);

	Brain(void);
	Brain(Brain const & src);
	~Brain(void);
	
	Brain & operator=(Brain const & rhs);
};

#endif

