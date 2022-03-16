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

class PhoneBook
{
private:
	int i;
	char tab[8][56];

public:
	void init(void)
	{
		i = 0;
	}
	void addcontact(std:: string str)
	{
		str.copy(tab[i], 56);
		std::cout << "tab = " << tab[i] << std::endl;
		if (i != 8)
			i++;
	}
	PhoneBook();
	~PhoneBook();
};

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

#endif