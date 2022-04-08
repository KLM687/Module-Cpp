/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:23:39 by flee              #+#    #+#             */
/*   Updated: 2022/04/04 13:23:40 by flee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _number( 0 )	
{
}

Fixed::Fixed(const int input)
{
	this->_number = (input * (1 << this->_bits));
}

Fixed::Fixed(const float input)
{
	this->_number = roundf((input * (1 << this->_bits)));
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	
	return;
}

int 	Fixed::getRawBits(void) const
{
	return this->_number;
}

void 	Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

float	Fixed::toFloat(void) const
{
	return(((float)Fixed::getRawBits()/(float)(1 << this->_bits)));
}

int 	Fixed::toInt(void) const
{
	return (Fixed::getRawBits() >> this->_bits);
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_number = rhs.getRawBits();
	
	return *this;
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return(this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return(this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return(this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return(this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return(this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return(this->toFloat() != rhs.toFloat());
}

Fixed 	Fixed::operator+(Fixed const & rhs) const
{
	return ((Fixed)(this->toFloat() + rhs.toFloat()));
}

Fixed 	Fixed::operator-(Fixed const & rhs) const
{
	return ((Fixed)(this->toFloat() - rhs.toFloat()));
}

Fixed 	Fixed::operator*(Fixed const & rhs) const
{
	return ((Fixed)(this->toFloat() * rhs.toFloat()));
}

Fixed 	Fixed::operator/(Fixed const & rhs) const
{
	return ((Fixed)(this->toFloat() / rhs.toFloat()));
}

Fixed & Fixed::operator++(void)
{
	this->_number++;
	return (*this);
}

Fixed  Fixed::operator++(int)
{
	Fixed temp = *this;

	++*this;
	return (temp);
}

Fixed & Fixed::operator--(void)
{
	this->_number--;
	return (*this);
}

Fixed  Fixed::operator++(int)
{
	Fixed temp = *this;

	--*this;
	return (temp);
}



Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	
	return (o);
}
