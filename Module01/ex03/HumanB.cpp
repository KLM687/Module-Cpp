/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:45:13 by flee              #+#    #+#             */
/*   Updated: 2022/03/24 15:45:19 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
void	HumanB::attack(void)
{
	if (!this->_weapon)
		std::cout<< this->_name << " attaks with his bare hand " << std::endl;
	else
		std::cout<< this->_name << " attaks with his " << this->_weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB(void)
{
}
