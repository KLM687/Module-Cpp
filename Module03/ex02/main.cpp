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
#include "Fragtrap.hpp"

int main (void)
{
	Fragtrap fragtrap("Fragtrap");

	fragtrap.highFivesGuys();
	fragtrap.attack("Brick");
	fragtrap.attack("Brick");
	fragtrap.attack("Brick");
	fragtrap.attack("Brick");
	fragtrap.beRepaired(100);
	fragtrap.takeDamage(1000);
	fragtrap.highFivesGuys();
	fragtrap.attack("Brick");
}