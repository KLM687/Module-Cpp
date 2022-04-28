/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:16:10 by flee              #+#    #+#             */
/*   Updated: 2022/04/28 15:16:11 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

static uintptr_t serialize(Data* ptr)
{
	return	(reinterpret_cast<uintptr_t>(ptr));
}

static Data* deserialize(uintptr_t raw)
{
	return	(reinterpret_cast<Data *>(raw));
}

int	main( void )
{
	Data		data("tututu");
	uintptr_t	test = serialize(&data);

	Data	*data1 = deserialize(test);
	
	std::cout << "Data1 address: "<< &data << std::endl;
	std::cout << "Data2 address: "<< data1 << std::endl;
	std::cout << "Data1 value: " << data.getStr() << std::endl;
	std::cout << "Data2 value: " << (*data1).getStr() << std::endl;
	return (0);
}
