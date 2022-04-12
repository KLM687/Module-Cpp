/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:42:38 by flee              #+#    #+#             */
/*   Updated: 2022/04/11 16:42:39 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fragtrap.hpp"

void Fragtrap::highFivesGuys(void)
{
	std::cout << "Give me an HIGGGHFIIIIVE!!!!" << std::endl;
}

void Fragtrap::status(void)
{
	std::cout << this->_name << std::endl;
	std::cout << this->_hit_pt << std::endl;
	std::cout << this->_energy_pt << std::endl;
	std::cout << this->_atck_dmg << std::endl;
}

Fragtrap::Fragtrap(void)
{
	this->_name = "default";
	this->_hit_pt = 100;
	this->_energy_pt = 100;
	this->_atck_dmg = 30;
	std::cout << "Fragtrap Defaut Constructor called" << std::endl;
}

Fragtrap::Fragtrap(std::string name)
{
	this->_name = name;
	this->_hit_pt = 100;
	this->_energy_pt = 100;
	this->_atck_dmg = 30;
	std::cout << "Fragtrap Constructor called" << std::endl;
}

Fragtrap::~Fragtrap(void)
{
	std::cout << "Fragtrap Destructor is here" << std::endl;
}

Fragtrap &	Fragtrap::operator=(Fragtrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_energy_pt = rhs._energy_pt;
		this->_hit_pt = rhs._hit_pt;
		this->_atck_dmg = rhs._atck_dmg;
	}
	return *this;
}

Fragtrap::Fragtrap(Fragtrap const & src)
{
	*this = src;
	return ;
}
