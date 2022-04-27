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
#include <cstdlib>
#include <stdlib.h>
#include <iomanip>


class ScalarConvert
{
private:
	
	char 		_c;
	int  		_i;
	bool		_iOverflow;
	float		_f;
	bool		_fOverflow;
	double 		_d;
	bool		_dOverflow; 

public:
	std::string findType(std::string str);
	bool		isInt(std::string str);
	bool		isFloat(std::string str);
	bool		isDouble(std::string str);
	bool		isChar(std::string str) const;
	void		check_overflow(std::string str);
	bool 		exception(std::string str);

	ScalarConvert(void);
	ScalarConvert(std::string str);
	ScalarConvert(ScalarConvert const & src);
	~ScalarConvert(void);

};

#endif