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
