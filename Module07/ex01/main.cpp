/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:16:20 by flee              #+#    #+#             */
/*   Updated: 2022/04/29 10:16:21 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main (void)
{
	char ctab[] = "ABCDEFG";
	int  itab[] = {0,1,2,3,4,5,6,7};
	
	Iter(&ctab, 8, print<char>);
	Iter(&itab, 8, print<int>);
}