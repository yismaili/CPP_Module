/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:00:20 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/29 10:48:04 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(Fixed const  &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

void	Fixed::operator=(Fixed const  &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value =  other.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	return (value);
}

void Fixed::setRawBits( int const raw ) {
	value = raw;
}
Fixed::Fixed(const int nbrInt) {
    value = nbrInt << bits;
    std::cout <<"Int constructor called" << std::endl;
}
Fixed::Fixed(const float nbrFloat) {
    value = roundf(nbrFloat * 256);
    std::cout <<"Float constructor called"<< std::endl;
}
int Fixed:: toInt( void ) const {
    return (value >>bits);
}
float Fixed:: toFloat( void ) const {
    return ((float)value / 256);
}
std::ostream &operator<<(std::ostream &outputStream, Fixed const &fixedPoint) {
	outputStream << fixedPoint.toFloat();
	return (outputStream);
}