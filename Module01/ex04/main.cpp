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
	std::string replace;
	char 		*filename;
	std::size_t	found;
	int 		len;

	found = 0;

	if (argc != 4)
	{
		std::cout << "./replace FILE \"string1\" \"string2\"" << std::endl;
		return (1);
	}

	std::ifstream file1;
	file1.open(argv[1], std::ifstream::in);
	
	if (file1.fail() || file1.bad())
	{
		std::cout << "error file !" << std::endl;
		return (1);
	}

	if (!file1.is_open())
	{
		std::cout << "error opening file !" << std::endl;
		return (1);
	}

	len = strlen(argv[2]);

	while (getline(file1, line))
	{
		found = 0;
		if (!(argv[2][0] == '\0' &&  argv[3][0] == '\0'))
		{
			if (strlen(argv[2]))
			{
				found = line.find(argv[2], found);
				while (found < line.size())
				{
					line.erase(found, len);
					line.insert(found , argv[3]);
					found += strlen(argv[3]);
					found = line.find(argv[2], found);
				}
			}
		}	
		if (line.empty())
			replace = replace + '\n';
		else
			replace = replace + line + '\n';
	}
	if (!line.empty())
		replace.erase(replace.size() - 1, 1);
	file1.close();
	filename = strcat(argv[1], ".replace");
	std::ofstream file2(filename);
	if (!file2.is_open())
	{
		std::cout << "error opening file2 !" << std::endl;
		return (1);
	}
	file2 << replace;
	file2.close();
	return (0);
}