/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 09:54:06 by flee              #+#    #+#             */
/*   Updated: 2022/04/11 09:54:07 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
#include <cstring>

class Claptrap
{
protected:
	std::string _name;
	int 		_hit_pt;
	int			_energy_pt;
	int			_atck_dmg;
public:

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	Claptrap & operator=(Claptrap const & rhs);
	Claptrap(void);
	Claptrap(std::string name);
	Claptrap(Claptrap const & src);
	~Claptrap(void);
};

#endif
