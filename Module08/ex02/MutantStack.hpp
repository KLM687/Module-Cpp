/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:10:51 by flee              #+#    #+#             */
/*   Updated: 2022/05/03 14:10:52 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <list>

template<typename T>
class MutantStack : public std::stack<T,std::deque<T> >
{
public:
	
	typedef typename std::deque<T>::iterator iterator;
	
	iterator begin(void)
	{
		return (this->c.begin());
	}
	iterator end(void)
	{
		return (this->c.end());
	}
	MutantStack<T>(void){};
	MutantStack<T>(MutantStack const & cpy)
	{
		this->c = cpy.c;
	}
	MutantStack& operator=( const MutantStack& other)
	{
		this->c = other.c;
	}
	~MutantStack<T>(void){};
};

#endif
