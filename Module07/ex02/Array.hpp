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
# include <cstdlib>
# include <ctime>


template<typename T>
class Array
{
private:
		T				*_array;
		unsigned int	_size; 
public:

	void size(void) const
	{
		return (this->_size);
	}

	Array<T>(void)
	{
		this->_array = new T[1];
		this->_array[0] = 0;
		this->_size = 1;
	}
	
	Array<T>(unsigned int n) : _array(new T[n]), _size(n){};
	
	Array(Array<T> const & cpy)
	{
		this->_size = cpy._size;
		_array = new T[_size];
		for (unsigned int i = 0 ; i < _size ; i++)
		{
			_array[i] = cpy._array[i];
		}
	}
	~Array(void)
	{
		delete [] _array;
	}
};

#endif
