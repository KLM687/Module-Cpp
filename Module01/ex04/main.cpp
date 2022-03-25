/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:49:55 by flee              #+#    #+#             */
/*   Updated: 2022/03/24 15:49:56 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <cstring>
#include <istream>

int main (int argc, char **argv)
{
	std::string line;
	
	if (argc != 2)
	{
		std::cout << "./replace FILE \"string1\" \"string2\"" << std::endl;
		return (1);
	}
	std::fstream file1;
	file1.open(argv[1], std::fstream::in);
	while (std::getline(file1, line))
	{
		std::cout << line << std::endl;
	}
	file1.close();
	return (0);
}
