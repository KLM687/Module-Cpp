/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 09:57:58 by flee              #+#    #+#             */
/*   Updated: 2022/03/21 09:58:01 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"
#include "newZombie.hpp"
#include "randomChump.hpp"

int main (void)
{

	Zombie 		Foo("Foo");
	Foo.announce();
	randomChump("Michael");
	Zombie 	 	*Jo = newZombie("Jo");
	Jo->announce();
	delete (Jo);
}
