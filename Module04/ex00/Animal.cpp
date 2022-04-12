/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:02:46 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:02:47 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

void	Animal::getType(void)
{
	return (this->_type);
}

Animal::Animal(void)
{
	this->_type = "Default";
}

Animal::Animal(std::string type) : _type(type)
{
}

Animal::Animal(Animal const & src)
{
	*this = src;
	return;
}

Animal::~Animal(void)
{
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}
