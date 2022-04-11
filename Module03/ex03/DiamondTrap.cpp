/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:25:41 by flee              #+#    #+#             */
/*   Updated: 2022/04/11 17:25:43 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*void	DiamondTrap::attack(std::string const & target)
{
	Scavtrap::attack(target);
}*/

DiamondTrap::DiamondTrap(void)
{
	this->_name += "Default";
	this->_hit_pt = Fragtrap::_hit_pt;
	this->_energy_pt = Scavtrap::_energy_pt;
	this->_atck_dmg = Fragtrap::_atck_dmg;
	std::cout << "name : " << this->_name << std::endl;
	std::cout << "hit point : " << this->_hit_pt << std::endl;
	std::cout << "energy : " << this->_energy_pt << std::endl;
	std::cout << "atck : " << this->_atck_dmg << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	this->_name += "_clap_name";
	this->_hit_pt = Fragtrap::_hit_pt;
	this->_energy_pt = Scavtrap::_energy_pt;
	this->_atck_dmg = Fragtrap::_atck_dmg;
	std::cout << "name : " << this->_name << std::endl;
	std::cout << "hit point : " << this->_hit_pt << std::endl;
	std::cout << "energy : " << this->_energy_pt << std::endl;
	std::cout << "atck : " << this->_atck_dmg << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}
