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

int main (void)
{
	Claptrap claptrap("001");

	claptrap.beRepaired(10);
	claptrap.takeDamage(1000);
	claptrap.attack("Brick");
	claptrap.attack("Brick");
	claptrap.attack("Brick");
	claptrap.attack("Brick");
	claptrap.attack("Brick");
	claptrap.beRepaired(10000);

}