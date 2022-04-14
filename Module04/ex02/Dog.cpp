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
	this->_brain = new Brain();
	std::cout << "Dog Default Constructor Called" << std::endl;
}

Dog::Dog(std::string name)
{
	this->_type = name;
	this->_brain = new Brain();
	std::cout << "Dog Construteur Called" << std::endl;
}


Dog::Dog(Dog const & src) : AAnimal()
{
	this->_type = src.getType();
	this->_brain = src.getBrain();
	std::cout << "Dog copy Constructor Called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs.getType();
	this->_brain->setIdeas(rhs._brain->showIdea());
	return (*this);
}

Brain *Dog::getBrain(void) const
{
	return (this->_brain);
}

void Dog::makeSound(void) const
{
	std::cout << "Wooooooooff" << std::endl;
}

void Dog::showIdeas(void) const
{
	std::cout << this->_brain->showIdea() << std::endl;
}
	
void Dog::SetIdeas(std::string name)
{
	this->_brain->setIdeas(name);
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog Destructor Called" << std::endl;
}