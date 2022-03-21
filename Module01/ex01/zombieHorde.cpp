/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 12:34:02 by flee              #+#    #+#             */
/*   Updated: 2022/03/21 12:34:03 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
	int i;

	Zombie *horde = new Zombie[N];

	for (i = 0; i < N ; i++)
		horde[i].set_zombie(name);
	
	return (horde);
}