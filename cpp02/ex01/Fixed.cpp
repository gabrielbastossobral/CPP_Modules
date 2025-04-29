/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:19:16 by gabastos          #+#    #+#             */
/*   Updated: 2025/04/23 13:14:27 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_fixedPointValue = rhs.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return this->_fixedPointValue;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = value << this->_fractionalBits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = static_cast<int>(roundf(value * (1 << this->_fractionalBits)));
}

int	Fixed::toInt(void) const
{
	return this->_fixedPointValue >> this->_fractionalBits;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fixedPointValue) / (1 << this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
