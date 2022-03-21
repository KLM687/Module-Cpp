/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:42:48 by flee              #+#    #+#             */
/*   Updated: 2022/03/21 09:42:50 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

void 	Zombie::set_zombie(std::string name)
{
	this->_zombie = name;
}

std::string	Zombie::get_zombie(void) const
{
	return this->_zombie;
}

void	Zombie::announce(void) const
{
	std::cout << get_zombie() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
}