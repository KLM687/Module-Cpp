/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:16:52 by flee              #+#    #+#             */
/*   Updated: 2022/04/28 15:16:54 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(void)
{
	this->_str = "Default";
}

Data::~Data(void)
{
}

Data::Data(std::string str) : _str(str)
{
}

Data::Data(Data const & ref) : _str(ref.getStr())
{
}

Data & Data::operator=(Data const & ref)
{
	this->_str = ref.getStr();
	return (*this);
}

std::string Data::getStr( void ) const
{
	return (this->_str);
}
