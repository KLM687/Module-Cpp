/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:02:35 by flee              #+#    #+#             */
/*   Updated: 2022/04/12 15:02:37 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include "Brain.hpp"
# include <iostream>
# include <cstring>

class AAnimal
{
protected:
	std::string _type;	
public:

	virtual std::string getType(void) const = 0;
	virtual void makeSound(void) const = 0;
	AAnimal(void);
	AAnimal(std::string type);
	AAnimal(AAnimal const & src);
	virtual ~AAnimal(void);

	AAnimal & operator=(AAnimal const & rhs);
};

#endif