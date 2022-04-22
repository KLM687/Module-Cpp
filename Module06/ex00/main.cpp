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
	ScalarConvert convert(str);
	//convert.print();
	return (0);
}
