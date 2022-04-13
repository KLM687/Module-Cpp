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

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Default Animal sound !" << std::endl;
}

Animal::Animal(void)
{
	this->_type = "Default";
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	*this = src;
	std::cout << "Animal Copy Construtor Called" << std::endl;
	return;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}
