/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:07:08 by flee              #+#    #+#             */
/*   Updated: 2022/03/21 13:07:09 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main (void)
{
	std::string		brain = "THIS IS BRAIN";
	std::string*	brainPTR = &brain;
	std::string&	brainREF = brain;

	std::cout << &brain << " | " << brainPTR << " | " << &brainREF << std::endl;

	std::cout << brain << "  | " << *brainPTR << "  | " << brainREF << std::endl;
}
