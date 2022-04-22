/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:57:23 by flee              #+#    #+#             */
/*   Updated: 2022/04/22 09:57:24 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERT_HPP
# define SCALARCONVERT_HPP
#include <iostream>
#include <cstring>
#include <string>

class ScalarConvert
{
private:
	
	char 	_c;
	int  	_i;
	float	_f;
	double 	_b; 

public:

	std::string findType(std::string str) const;
	bool		isInt(std::string str) const;
	bool		isFloat(std::string str) const;
	bool		isDouble(std::string str) const;
	bool		isChar(std::string str) const;
	void print(void) const;

	ScalarConvert(void);
	ScalarConvert(std::string str);
	ScalarConvert(ScalarConvert const & src);
	~ScalarConvert(void);

};

#endif