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
#include <iomanip>

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook	phone;
	
	std::string str;
	while (str.compare("EXIT") != 0)
	{
		std::getline (std::cin, str);
		if(str.compare("ADD") == 0)
			phone.fill_contact();
		if(str.compare("SEARCH") == 0)
			phone.search_contact();
	}
	return (0);
}
