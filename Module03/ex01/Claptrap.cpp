/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:53:52 by flee              #+#    #+#             */
/*   Updated: 2022/04/11 09:53:59 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

void Claptrap::attack(const std::string& target)
{
	if (this->_hit_pt <= 0)
		std::cout << "Claptrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_pt <= 0)
		std::cout << "Claptrap " << this->_name << " is tired and can't perform an attack" << std::endl;
	else
	{
		std::cout << "Claptrap " << this->_name  << " attack " << target << " causing " << this->_atck_dmg << " points of damage!" << std::endl;
		this->_energy_pt -= 1;
	}
}

void Claptrap::takeDamage(unsigned int amount)
{
	this->_hit_pt -= amount;
	std::cout << "Claptrap " << this->_name << " lose " << amount << " hits point !" << std::endl;
	std::cout << "Claptrap " << this->_name << " actually have " << this->_hit_pt << " hits point" << std::endl;
	if (this->_hit_pt <= 0)
		std::cout << "Claptrap " << this->_name << " is dead" << std::endl;
}

void Claptrap::beRepaired(unsigned int amount)
{
	if (this->_hit_pt <= 0)
		std::cout << "Claptrap " << this->_name << " is dead" << std::endl;
	else if (this->_energy_pt <= 0)
		std::cout << "Claptrap " << this->_name << " is tired and can't repair himself" << std::endl;
	else
	{
		this->_hit_pt += amount;
		std::cout << "Claptrap " << this->_name << " gain " << amount << " hits point!" << std::endl;
		std::cout << "Claptrap " << this->_name << " have " << this->_hit_pt << " hits point!" << std::endl;
		this->_energy_pt -= 1;
	}
}

Claptrap &	Claptrap::operator=(Claptrap const & rhs)
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

Claptrap::Claptrap(void)
{
	this->_name = "claptrap";
	std::cout << "Claptrap Constructor is here" << std::endl;
}

Claptrap::Claptrap(std::string name) : _name(name), _hit_pt(10), _energy_pt(10), _atck_dmg(0)
{
	std::cout << "Claptrap Constructor is here" << std::endl;
}

Claptrap::Claptrap(Claptrap const & src)
{
	*this = src;
	return ;
}

Claptrap::~Claptrap()
{
	std::cout << "Claptrap Destructor is here" << std::endl;
}
