/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:11:56 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:11:58 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(std::string name)
{
	this->_type = name;
	std::cout << "Dog Construteur Called" << std::endl;
}


Dog::Dog(Dog const & src) : Animal()
{
	this->_type = src.getType();
	std::cout << "Dog copy Constructor Called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void Dog::makeSound(void) const
{
	std::cout << "Wooooooooff" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called" << std::endl;
}