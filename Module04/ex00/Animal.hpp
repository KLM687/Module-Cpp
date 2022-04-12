/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:02:35 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:02:37 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <cstring>

class Animal
{
protected:
	std::string _type;	
public:

	void getType(void);

	Animal(void);
	Animal(std::string type);
	Animal(Animal const & src);
	~Animal(void);

	Animal &	Animal::operator=(Animal const & rhs)
};

#endif