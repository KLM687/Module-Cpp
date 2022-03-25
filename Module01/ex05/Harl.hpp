/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:51:34 by flee              #+#    #+#             */
/*   Updated: 2022/03/25 12:51:35 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <cstring>

class Harl
{
private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);
	typedef void (Harl::*ptrTab)(void);
	ptrTab array[4];
public:
	void complain(std::string level);
	void call(void (Harl::*fct)());
	Harl(void);
	~Harl(void);
};

#endif
