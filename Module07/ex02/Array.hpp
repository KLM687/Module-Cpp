/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:13:49 by flee              #+#    #+#             */
/*   Updated: 2022/04/29 12:13:50 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
private:
		T *_array;
public:
	Array(void)
	{
		this->_array = new T[1];
		_array[0] = 0;
	}
	Array(unsigned int n) : _array(new T[n]){}; 
	~Array(void)
	{
		delete [] _array;
	}
};

#endif
