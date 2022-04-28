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
#include <limits>
#include <float.h>
#include <math.h>
#include <cmath> 
#include <stdlib.h> 


bool	ScalarConvert::isInt(std::string str) 
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
	return 1;
}

bool	ScalarConvert::isFloat(std::string str)
{
	int i;
	bool point;

	point = false;
	i = 0;
	if (str[str.size() - 1] != 'f' || str[0] == '.' || str[0] == 'f')
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

bool	ScalarConvert::isDouble(std::string str)
{
	int 	i;
	bool 	point;
	
	i = 1;
	point = false;
	if ((str[0] != '-' && str[0] != '+' && !isdigit(str[0]))
		|| (str[0] == '.'))
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
	if (point)
		return 1;
	return 0;
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

std::string	ScalarConvert::findType(std::string str)
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

void	ScalarConvert::check_overflow(std::string str)
{
	char const *a = str.c_str();
	long long b = atol(a);
	if (b > std::numeric_limits<int>::max() || b < std::numeric_limits<int>::min())
		this->_iOverflow = true;

	float c = atof(a);
	c = std::abs(c);
	if (b >= FLT_MAX || std::isinf(c))
		this->_fOverflow = true;

	char *endptr1;
	double d = strtod(a, &endptr1);
	d = std::abs(d);
	if (d >= DBL_MAX || std::isinf(d))
		this->_dOverflow = true;
}

bool	ScalarConvert::exception(std::string str)
{
	if(str == "nan" || str == "nanf")
	{
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : nanf" << std::endl;
		std::cout << "Double : nan" << std::endl;
		return 1;
	}
	if (str == "+inf" || str == "+inff")
	{
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : impossible" << std::endl;
		std::cout << "Double : impossible" << std::endl;
		return 1;
	}
	if (str == "-inf" || str == "-inff")
	{
		std::cout << "Char : impossible" << std::endl;
		std::cout << "Int : impossible" << std::endl;
		std::cout << "Float : impossible" << std::endl;
		std::cout << "Double : impossible" << std::endl;
		return 1;
	}
	return 0;
}

ScalarConvert::ScalarConvert(void) : _iOverflow(false), _fOverflow(false), _dOverflow(false)  
{
}

ScalarConvert::ScalarConvert(std::string str) : _iOverflow(false), _fOverflow(false), _dOverflow(false)  
{
	if (exception(str))
		return;
	std::string type = findType(str);

	if (type == "Int" || type == "Double" || type == "Float")
	{
		check_overflow(str);
		char const *c = str.c_str();
		float b = 0.00000;
		int d = atol(c);
		b = atof(c);
		if (b >= 32 && b <= 126)
		{
			this->_c = static_cast<char>(b);
			std::cout << "char : " << "'" << this->_c << "'" << std::endl;
		}
		else	
			std::cout << "Char : non printable" << std::endl;
		
		if (!this->_iOverflow)
		{
			this->_i = static_cast<int>(d);
			std::cout << "Int : " << this->_i << std::endl;
		}
		else
			std::cout << "Int : Impossible" << std::endl;
		
		if (!this->_fOverflow)
		{
			b = atof(c);
			this->_f = static_cast<float>(b);
			std::cout << "Float : " << std::setprecision(5) <<this->_f << "f" << std::endl;
		}
		else
			std::cout << "Float : Impossible" << std::endl;
		
		if (!this->_dOverflow)
		{
			char *endptr1;
			double y = strtod(c, &endptr1);
			this->_d = static_cast<double>(y);
			std::cout << "Double : " << this->_d <<std::endl;
		}
		else
			std::cout << "Double : Impossible" << std::endl;
	}
	else if (type == "Char")
	{
		this->_c = static_cast<char>(str[0]);
		this->_i = static_cast<int>(str[0]);
		this->_f = static_cast<float>(str[0]);
		this->_d = static_cast<double>(str[0]);
		std::cout << "char : " << "'" << this->_c << "'" << std::endl;
		std::cout << "Int : " << this->_i << std::endl;
		std::cout << "Float : " << this->_f << std::endl;
		std::cout << "Double : " << this->_d << std::endl;
	}
	else
		std::cout << "Enter a valid type !" << std::endl;
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