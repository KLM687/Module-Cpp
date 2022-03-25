/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:51:57 by flee              #+#    #+#             */
/*   Updated: 2022/03/25 12:51:59 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	if (level.compare("DEBUG") == 0)
		(*this.*array[0])();
	if (level.compare("INFO") == 0)
		(*this.*array[1])();
	if (level.compare("WARNING") == 0)
		(*this.*array[2])();
	if (level.compare("ERROR") == 0)
		(*this.*array[3])();
}

Harl::Harl(void)
{
	array[0] = &Harl::_debug;
	array[1] = &Harl::_info;
	array[2] = &Harl::_warning;
	array[3] = &Harl::_error;
}

Harl::~Harl(void)
{
}


