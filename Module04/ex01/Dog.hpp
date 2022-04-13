/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:11:51 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:11:52 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
public:
	void makeSound(void) const;

	Dog(void);
	Dog(std::string type);
	Dog(Dog const & src);
	virtual ~Dog(void);

	Dog & operator=(Dog const & rhs);
};

#endif