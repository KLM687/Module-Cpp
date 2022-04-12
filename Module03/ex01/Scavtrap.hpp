/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:12:26 by flee              #+#    #+#             */
/*   Updated: 2022/04/11 12:12:30 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "Claptrap.hpp"

class Scavtrap : public Claptrap
{
private:
	bool		_guard;
public:
		void guardGate(void);
		void attack(const std::string& target);
		void status(void);

		Scavtrap(void);
		Scavtrap(std::string name);
		~Scavtrap(void);

		Scavtrap(Scavtrap const & src);
		Scavtrap & operator=(Scavtrap const & rhs);
};

#endif
