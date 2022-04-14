/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:14:28 by flee              #+#    #+#             */
/*   Updated: 2022/04/13 17:14:29 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Eureka";
	std::cout << "Brain Constructor Called ! Brain filled with Ideas !" << std::endl;
}

Brain::Brain(Brain const & src)
{
	this->ideas = src.ideas;
	std::cout << "Brain Copy Construtor Called" << std::endl;
}

Brain::~Brain(void)
{
	delete [] (this->ideas);
	std::cout << "Brain Destructor Called !" << std::endl;
}


Brain & Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}
