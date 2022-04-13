/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:12:07 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:12:08 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->_type = "Cat";
	std::cout << "Cat Default Constructor Called" << std::endl;
}

Cat::Cat(std::string name)
{
	this->_type = name;
	std::cout << "Cat Construteur Called" << std::endl;
}

Cat::Cat(Cat const & src) : Animal()
{
	this->_type = src.getType();
	std::cout << "Cat copy Constructor Called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meoooooooow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}
