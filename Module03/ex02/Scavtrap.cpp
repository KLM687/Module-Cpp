/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:12:36 by flee              #+#    #+#             */
/*   Updated: 2022/04/11 12:12:37 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scavtrap.hpp"

void Scavtrap::attack(const std::string& target)
{
	if (this->_hit_pt <= 0)
		std::cout << "Scavtrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_pt <= 0)
		std::cout << "Scavtrap " << this->_name << " is tired and can't perform an attack" << std::endl;
	else
	{
		std::cout << "Scavtrap " << this->_name  << " attack " << target << " causing " << this->_atck_dmg << " points of damage!" << std::endl;
		this->_energy_pt -= 1;
	}
}

void Scavtrap::guardGate(void)
{
	this->_guard = true;
	std::cout << "GuardKeeper mode on" << std::endl;
}

void Scavtrap::status(void)
{
	std::cout << this->_name << std::endl;
	std::cout << this->_hit_pt << std::endl;
	std::cout << this->_energy_pt << std::endl;
	std::cout << this->_atck_dmg << std::endl;
}

Scavtrap::Scavtrap(void)
{
	this->_name = "default";
	this->_hit_pt = 100;
	this->_energy_pt = 50;
	this->_atck_dmg = 20;
	std::cout << "Scavtrap Default Constructor is here" << std::endl;
}

Scavtrap::Scavtrap(std::string name) : _guard(false)
{
	this->_name = name;
	this->_hit_pt = 100;
	this->_energy_pt = 50;
	this->_atck_dmg = 20;
	std::cout << "Scavtrap Constructor is here" << std::endl;
}

Scavtrap::~Scavtrap(void)
{
	std::cout << "Scavtrap Destructor is here" << std::endl;
}

Scavtrap &	Scavtrap::operator=(Scavtrap const & rhs)
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

Scavtrap::Scavtrap(Scavtrap const & src)
{
	*this = src;
	return ;
}