/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 17:48:56 by flee              #+#    #+#             */
/*   Updated: 2022/04/29 17:48:59 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP
# include <iostream>
# include <vector>
# include <algorithm>
# include <list>
# include <iterator>
# include <array>

template<typename T>
bool	easyfind(T const & haystack, int needle)
{
	typename T::const_iterator it = std::find(haystack.begin(), haystack.end(), needle);

  	if (it != haystack.end())
	{
  		std::cout << "Element is here / ret = ";
		return(1);
	}
  	else
	{
		std::cout << "Element is missing / ret = ";
		return(0);
	}
	return (0);
}		
#endif