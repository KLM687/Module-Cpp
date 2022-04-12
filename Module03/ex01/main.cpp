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
	Scavtrap scavtrap("Scavtrap");

	scavtrap.beRepaired(100);
	//scavtrap.takeDamage(1000);
	scavtrap.attack("Brick");
	scavtrap.guardGate();
	scavtrap.attack("Brick");
	scavtrap.status();

}