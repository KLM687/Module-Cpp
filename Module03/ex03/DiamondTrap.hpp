/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 17:25:35 by flee              #+#    #+#             */
/*   Updated: 2022/04/11 17:25:36 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "Fragtrap.hpp"
# include "Scavtrap.hpp"

class DiamondTrap : public Fragtrap , public Scavtrap
{
private:
	std::string _name;
public:

	//void attack(std::string const & target);
	DiamondTrap(void);
	DiamondTrap(std::string name);
	~DiamondTrap(void);
};

#endif
