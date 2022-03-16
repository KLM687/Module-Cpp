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

class Contact
{
private:
	
public:
	Contact(void);
	~Contact(void);
};

Contact::Contact()
{
	std::cout << "constructor contact" << std::endl;
	return;
}

Contact::~Contact()
{
	std::cout << "destrutor contact" << std::endl;
	return;
}


#endif
