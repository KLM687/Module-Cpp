/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:18:12 by flee              #+#    #+#             */
/*   Updated: 2022/04/29 10:18:13 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename A, typename B, typename C>
void Iter(A ptr, B size, C function)
{
	for (int i = 0; i < size; i++)
	{
		function((*ptr)[i]);
	}
}

template<typename T>
void print(T print)
{
	std::cout << print << std::endl;
}

#endif
