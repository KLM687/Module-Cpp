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

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "./replace FILE \"string1\" \"string2\"" << std::endl;
		return (1);
	}
	return (0);
}
