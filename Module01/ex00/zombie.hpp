/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 14:37:13 by flee              #+#    #+#             */
/*   Updated: 2022/03/18 14:37:16 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
private:
	std::string _zombie;
public:
	void		announce(void) const;
	std::string	get_zombie(void) const;
	void		set_zombie(void);
	Zombie(std::string name);
	~Zombie(void);
};



#endif

