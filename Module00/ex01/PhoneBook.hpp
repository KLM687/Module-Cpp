/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 15:05:00 by flee              #+#    #+#             */
/*   Updated: 2022/03/14 15:05:02 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# include <iostream>
# include <cstring>
# include <iomanip>

class PhoneBook
{
private:
	int i;
	Contact contact[7];
public:
	void fill_contact(void);
	void search_contact(void);
	void print_contact();
	PhoneBook();
	~PhoneBook();
};

void PhoneBook::print_contact()
{
	int a;

	std::cin >> a;
	while(a < 0 || a >= this->i)
	{
		std::cout << "not a valid contact" << std::endl;
		std::cin >> a;
	} 
	contact[a].print();
}

void PhoneBook::search_contact()
{
	int a;

	a = 0;
	if (i == 0)
	{
		std::cout << "(╬ ಠ益ಠ)  empty !!!  (╬ ಠ益ಠ)" << std::endl;
		return ;
	}
	for(a = 0; a < this->i; a++) 
	{
		std::cout << std::setw(10) << a;
		std::cout << std::setw(1) << '|';
		contact[a].show_contact();
	}
	print_contact();
}

void PhoneBook::fill_contact()	
{
	contact[this->i].add_contact();
	if (this->i < 8)
		this->i++;
}

PhoneBook::PhoneBook()
{
	i = 0;
}

PhoneBook::~PhoneBook()
{
}

#endif