/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:45:21 by flee              #+#    #+#             */
/*   Updated: 2022/03/14 12:45:22 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main (int argc, char **argv)
{
	int		x;
	size_t	y;

	x = 1;
	y = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for(x = 1; x < argc; x++)
		{
			for (y = 0; y < strlen(argv[x]); y++)
			{
				if (isupper(argv[x][y]))
					std::cout << (char)tolower(argv[x][y]);
				else if (islower(argv[x][y]))
					std::cout << (char)toupper(argv[x][y]);
				else
					std::cout << (char)argv[x][y];
			}
		}
	}
	std::cout << endl;
	return (0);
}