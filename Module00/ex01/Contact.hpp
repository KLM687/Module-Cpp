/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:04:49 by flee              #+#    #+#             */
/*   Updated: 2022/03/14 15:04:52 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <cstring>
# include <iomanip>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	void add_contact(void);
	void clean_form(void);
	void show_contact(void);
	void print(void);
	Contact(void);
	~Contact(void);

};

void 	Contact::print()
{
	std::cout << first_name << std::endl;	
	std::cout << last_name << std::endl;	
	std::cout << nickname << std::endl;	
	std::cout << phone_number << std::endl;	
	std::cout << darkest_secret << std::endl;	
}

void	Contact::add_contact()
{
	std::cout << "first name" << std::endl;
	while (first_name.empty())
		getline(std::cin, first_name);
	std::cout << "last name" << std::endl;
	while (last_name.empty())
		getline(std::cin, last_name);
	std::cout << "nickname" << std::endl;
	while (nickname.empty())
		getline(std::cin, nickname);
	std::cout << "phone number" << std::endl;
	while (phone_number.empty())
		getline(std::cin, phone_number);
	std::cout << "darkest secret" << std::endl;
	while (darkest_secret.empty())
		getline(std::cin, darkest_secret);
	clean_form();
}

void	Contact::clean_form()
{
	if (first_name.size() >= 10)
	{
		first_name = first_name.substr(0,9);
		first_name.append(".");
	}
	if (last_name.size() >= 10)
	{
		last_name = last_name.substr(0,9);
		last_name.append(".");
	}
	if (nickname.size() >= 10)
	{
		nickname = nickname.substr(0,9);
		nickname.append(".");
	}
	if (phone_number.size() >= 10)
	{
		phone_number = phone_number.substr(0,9);
		phone_number.append(".");
	}
	if (darkest_secret.size() >= 10)
	{
		darkest_secret = darkest_secret.substr(0,9);
		darkest_secret.append(".");
	}
}

void	Contact::show_contact()
{
	std::cout << std::setw(10) << first_name << std::setw(1) << '|';
	std::cout << std::setw(10) << last_name << std::setw(1) << '|';
	std::cout << std::setw(10) << nickname << std::setw(1) << std::endl;
}

Contact::Contact()
{
	return;
}

Contact::~Contact()
{
	return;
}


#endif
