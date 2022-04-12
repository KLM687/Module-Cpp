/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:12:14 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:12:16 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	Cat(std::string type);
	Cat(Animal const & src);
	~Cat(void);
};

Cat::Cat(void)
{
}

Cat::~Cat()
{
}
