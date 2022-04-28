/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:16:36 by flee              #+#    #+#             */
/*   Updated: 2022/04/28 15:16:37 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
private:
	std::string _str;
public:
	Data(std::string str);
	Data(Data const & ref);
	Data(void);
	~Data(void);
	Data & operator=(Data const & ref);
	std::string getStr(void) const;
};

#endif