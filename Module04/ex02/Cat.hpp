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
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain *_brain;
public:
	void makeSound(void) const;
	Cat(void);
	Cat(std::string type);
	Cat(Cat const & src);
	virtual ~Cat(void);

	Cat & operator=(Cat const & rhs);
};

#endif
