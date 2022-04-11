/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:54:34 by flee              #+#    #+#             */
/*   Updated: 2022/04/11 09:54:37 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"
#include "Scavtrap.hpp"

int main (void)
{
	Scavtrap scavtrap("002");

	scavtrap.attack("Brick");
	scavtrap.attack("Brick");
	scavtrap.attack("Brick");
	scavtrap.attack("Brick");
	scavtrap.beRepaired(100);
	scavtrap.guardGate();
	scavtrap.takeDamage(1000);
	scavtrap.attack("Brick");
}