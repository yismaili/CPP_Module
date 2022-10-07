/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:04:22 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/07 20:57:14 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl; /* initializes the data members of the class to their default values */
	value = 10;
}

Fixed::Fixed(Fixed const  &capy) {
	std::cout << "Copy constructor called" << std::endl; /* This initializes the new object with an already existing object */
	*this = capy;
}

void	Fixed::operator=(Fixed const  &capyAssign) {
	std::cout << "Copy assignment operator called" << std::endl; /* This assigns the value of one object to another object both of which are already exists */
	this->value =  capyAssign.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl; /* Destroy any alocatin caled in the end of the programe */
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}
