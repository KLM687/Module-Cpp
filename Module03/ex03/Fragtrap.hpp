/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 16:42:31 by flee              #+#    #+#             */
/*   Updated: 2022/04/11 16:42:32 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "Claptrap.hpp"

class Fragtrap : virtual public Claptrap
{
public:
	void highFivesGuys(void);
	Fragtrap(void);
	Fragtrap(std::string name);
	~Fragtrap(void);
};

#endif
