/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalarconvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:57:32 by flee              #+#    #+#             */
/*   Updated: 2022/04/22 09:57:33 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#include <limits.h>

bool	ScalarConvert::isInt(std::string str) const
{
	int i;

	i = 1;
	if (str[0] != '-' && str[0] != '+' && !isdigit(str[0]))
		return (0);
	while (str[i])
	{
		if (!isdigit(str[i]))
			return 0;
		i++;
	}
	char const *a = str.c_str();
	double b = atol(a);
	if (b > INT_MAX)
	{
		std::cout << "INT OVERFLOW" << std::endl;
		return 0;
	}
	return 1;
}

bool	ScalarConvert::isFloat(std::string str) const
{
	int i;
	bool point;

	point = false;
	i = 0;
	if (str[str.size() - 1] != 'f' || str[0] == '.')
		return 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (i < (int)str.size() - 1)
	{
		if (!isdigit(str[i]) )
		{
			if (point)
				return 0;
			else if (str[i] == '.')
				point = true;
			else	
				return 0;
		}
		i++;
	}
	return 1;
}

bool	ScalarConvert::isDouble(std::string str) const
{
	int 	i;
	bool 	point;
	
	i = 1;
	point = false;
	if (str[0] != '-' && str[0] != '+' && str[0] == '.' && !isdigit(str[0]))
		return (0);
	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			if (point)
				return 0;
			else if (str[i] == '.')
				point = true;
			else	
				return 0;
		}
		i++;
	}
	return 1;
}

bool	ScalarConvert::isChar(std::string str) const
{
	if (str.size() == 1)
	{
		if (isascii(str[0]))
			return 1;
	}
	return (0);
}

std::string	ScalarConvert::findType(std::string str) const
{
	if (isInt(str))
		return ("Int");
	else if (isFloat(str))
		return("Float");
	else if (isDouble(str))
		return ("Double");
	else if (isChar(str))
		return ("Char");
	return ("Enter a valid type");
}

void	ScalarConvert::print(void) const
{
	std::cout << "Char : " << this->_c << std::endl;
}


ScalarConvert::ScalarConvert(void)
{
}

ScalarConvert::ScalarConvert(std::string str) 
{
	std::string type = findType(str);
	std::cout << "type is " << type << std::endl;
}

ScalarConvert::ScalarConvert(ScalarConvert const & src)
{
	this->_c = src._c;
	this->_i = src._i;
	this->_f = src._f;
	this->_d = src._d;	
}

ScalarConvert::~ScalarConvert(void)
{
}