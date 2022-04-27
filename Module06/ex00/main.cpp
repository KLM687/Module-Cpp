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
#include <iomanip>


int main (int argc, char **argv)
{

	if (argc != 2)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return 1;
	}
	std::string str = argv[1];
	ScalarConvert convert(argv[1]);
	return (0);
}
