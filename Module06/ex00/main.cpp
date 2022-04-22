/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:57:02 by flee              #+#    #+#             */
/*   Updated: 2022/04/22 09:57:03 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#include <stdlib.h>

int main (int argc, char **argv)
{
	std::string str;

	if (argc != 2)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return 1;
	}
	str = argv[1];
	int i;
	bool point;

	point = false;
	i = 0;
	if (str[str.size() - 1] != 'f' || str[i] == '.')
		return 1;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (i < (int)str.size() - 1)
	{
		if (!isdigit(str[i]) )
		{
			if (point)
				return 2;
			else if (str[i] == '.')
				point = true;
			else	
				return 3;
		}
		i++;
	}
	std::cout << "ok" << std::endl;
	return 1;
	//ScalarConvert convert(str);
	//convert.print();
	return (0);
}
