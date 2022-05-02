/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:45:40 by flee              #+#    #+#             */
/*   Updated: 2022/05/02 11:45:41 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
}

Span::Span(unsigned int N) : _N(N)
{
	std::vector<int> vec(N, 0);
	_vec = &vec;
}

Span::Span(Span const & cpy)
{
	_vec = cpy._vec;
	_N = cpy._N;
}

std::vector<int>  *Span::getVec(void)
{
	return (_vec);
} 

void 	Span::printVec(void)
{
	std::cout << "The vector elements are : ";

	for(unsigned int i = 0; i < _vec->size(); i++)
   		std::cout << _vec->at(i) << ' ';
	std::cout << std::endl;
}

void    Span::addNumber(int nb)
{
    _N--;
    try
    {
        if (_N == 0)
            throw std::out_of_range ("OVERFLOW");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    _vec->push_back(nb);
}

Span & Span::operator=(Span const & rhs)
{
	_vec = rhs._vec;
	return (*this);
}

Span::~Span(void)
{
}
