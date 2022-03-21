/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:30:59 by flee              #+#    #+#             */
/*   Updated: 2022/03/21 12:31:02 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

int main (void)
{
	int			N;
	std::string	name;

	N = 10;
	name = "Michael";
	Zombie *horde = zombieHorde(N, name);

	for (int i = 0; i < N ; i++)
		horde[i].announce();

	delete [] horde;

}