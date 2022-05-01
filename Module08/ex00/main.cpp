/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:49:16 by flee              #+#    #+#             */
/*   Updated: 2022/04/29 17:49:17 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void)
{
	std::vector<int> vec;
	for (int i = 0 ; i < 20 ; i++)
		vec.push_back(i);
	std::cout << "Vector : " << easyfind(vec, 8) << std::endl;
	
	std::list<int> lst;
	for (int i = 0; i < 20; i++)
		lst.push_back(i);
	std::cout << "List : " << easyfind(lst , 8) << std::endl;

	std::array<int, 20> array;

	for (int i = 0 ; i < 20 ; i++)
		array[i] = i;
	std::cout << "Array : " << easyfind(array, 8) << std::endl;
}
