/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:57:04 by flee              #+#    #+#             */
/*   Updated: 2022/03/14 14:57:05 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

using namespace std;

int main (void)
{
	Contact phone;	
	std::string str;

	while (str.compare("EXIT") != 0)
	{
		std::getline (std::cin, str);
		//if(str.compare("ADD"))

		//if(str.compare("SEARCH"))
		
	}
	return (0);
}
