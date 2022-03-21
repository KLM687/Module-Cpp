/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 10:57:24 by flee              #+#    #+#             */
/*   Updated: 2022/03/21 10:57:25 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NEWZOMBIE_HPP
# define NEWZOMBIE_HPP
# include "zombie.hpp"
# include <cstring>
# include <new>

Zombie* newZombie(std::string name);

#endif