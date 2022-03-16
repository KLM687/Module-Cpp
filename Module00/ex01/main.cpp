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

void	add(PhoneBook phone)
{
	std::string str;
	std::string str1;

	std::cout << "first name" << std::endl;
	std::cin >> str;
	if ((str.size()) > 10)
		str = str.substr(0, 10);
	std::cout << "last name" << std::endl;
	std::cin >> str1;
	if ((str1.size()) > 10)
		str1 = str1.substr(0, 10);
	str = str + '|' + str1;
	std::cout << "nickname" << std::endl;
	std::cin >> str1;
	if ((str1.size()) > 10)
		str1 = str1.substr(0, 10);
	str = str + '|' + str1;
	std::cout << "phone number" << std::endl;
	std::cin >> str1;
	if ((str1.size()) > 10)
		str1 = str1.substr(0, 10);
	str = str + '|' + str1;
	std::cout << "darkest secret" << std::endl;
	std::cin >> str1;
	if ((str1.size()) > 10)
		str1 = str1.substr(0, 10);
	str = str + '|' + str1;
	phone.addcontact(str);
}

int main (void)
{
	PhoneBook phone;
	
	std::string str;
	phone.init();
	while (str.compare("EXIT") != 0)
	{
		std::getline (std::cin, str);
		if(str.compare("ADD") == 0)
			add(phone);
		//if(str.compare("SEARCH") == 0)
		
	}
	return (0);
}
