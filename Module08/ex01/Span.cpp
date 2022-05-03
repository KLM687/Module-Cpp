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

Span::Span(unsigned int N) : _N(N), _i(0)
{
	if (_N <= 1)
		throw std::out_of_range ("Exception : Size problem");
}

Span::Span(Span const & cpy)
{
	_vec = cpy._vec;
	_i = cpy._i;
	_N = cpy._N;
}

std::vector<int>  Span::getVec(void)
{
	return (_vec);
} 

void 	Span::printVec(void)
{
	std::cout << "The vector elements are : ";

	for(unsigned int i = 0; i < _vec.size();  i++)
   		std::cout << _vec.at(i) << ' ';
	std::cout << std::endl;
}

void    Span::addNumber(int nb)
{
	if (_i <= _N)
		_i++;
	if (_i > _N)
	{
		throw std::out_of_range ("Exception : Overflow");
		return ;
	}
	else
		_vec.push_back(nb);
}

int	Span::shortestSpan(void)
{
	int shortest;

	std::vector<int> tmp(_vec);
	std::sort(tmp.begin(), tmp.end());
	
	/*for(unsigned int i = 0; i < tmp.size();  i++)
   		std::cout << tmp.at(i) << ' ';
	std::cout << std::endl;*/
	
	std::adjacent_difference(tmp.begin(), tmp.end(), tmp.begin());
	tmp.erase(tmp.begin());
	shortest = *min_element(tmp.begin(), tmp.end());

	/*for(unsigned int i = 0; i < tmp.size();  i++)
   		std::cout << tmp.at(i) << ' ';
	std::cout << std::endl;*/
	
	return (shortest);
}

int	Span::longestSpan(void)
{
	int longest;

	std::vector<int> tmp(_vec);
	std::sort(tmp.begin(), tmp.end());
	longest = tmp[tmp.size() - 1] - tmp[0]; 
	
	return (longest);
}

Span & Span::operator=(Span const & rhs)
{
	_vec = rhs._vec;
	return (*this);
}

Span::~Span(void)
{
}
