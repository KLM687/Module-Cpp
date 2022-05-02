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
	std::vector<int> 	*_vec;
	unsigned int 		_N; 

public:
	Span(void);
	Span(unsigned int N);
	Span(Span const & cpy);
	~Span(void);

	std::vector<int>	*getVec(void);	
	void				printVec(void);
	void 				addNumber(int nb);	
	
	Span & operator=(Span const & rhs);
};

#endif
