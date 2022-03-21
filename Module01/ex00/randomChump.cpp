/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:13:53 by flee              #+#    #+#             */
/*   Updated: 2022/03/21 11:13:55 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomChump.hpp"

void randomChump(std::string name)
{
	Zombie randomChump(name);
	
	randomChump.announce();
}
