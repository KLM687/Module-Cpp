/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 11:45:33 by flee              #+#    #+#             */
/*   Updated: 2022/05/02 11:45:34 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
	std::vector<int> *_vec;

public:
	Span(void);
	Span(unsigned int N);
	Span(Span const & cpy);
	printVec(void);
	Span & operator=(Span const & rhs);
	~Span();
};

std::ostream &	operator<<(std::ostream & o, Span const & rhs)
{
	rhs.printVec();
	o << std::endl;
	return (o);
}

Span::Span(void)
{
}

Span::Span(unsigned int N)
{
	std::vector<int> vec(N, 0);
	_vec = &vec;
}

Span::Span(Span const & cpy)
{
	_vec = cpy._vec;
}

Span::printVec(void)
{
	std::for_each(_vec->begin(), _vec->end(), [](const auto &e)
	{
		std::cout << e << " ";
    });
	std::cout << std::endl;
}

Span::operator=(Span const & rhs)
{
	_vec = rhs._vec;
}

Span::~Span(void)
{
}


#endif
