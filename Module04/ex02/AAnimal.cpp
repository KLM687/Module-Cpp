/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:02:46 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:02:47 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Default AAnimal sound !" << std::endl;
}

AAnimal::AAnimal(void)
{
	this->_type = "Default";
	std::cout << "AAnimal Default Constructor Called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << "AAnimal Constructor Called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
	*this = src;
	std::cout << "AAnimal Copy Construtor Called" << std::endl;
	return;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Destructor Called" << std::endl;
}

AAnimal &	AAnimal::operator=(AAnimal const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
	}
	return *this;
}
