/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 21:03:43 by hbalasan          #+#    #+#             */
/*   Updated: 2023/12/02 21:09:25 by hbalasan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include "Fixed.h"

const int	Fixed::_fract = 8;

Fixed::Fixed(void): _value(0)
{
	std::cout << "Fixed object created with default constructor" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Fixed object copied" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Fixed object destroyed" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_value = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

#endif