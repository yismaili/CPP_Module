/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:00:20 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/08 17:49:56 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(Fixed const  &copy) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = copy.value;
}

Fixed &Fixed::operator=(Fixed const  &copyAssign) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value =  copyAssign.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	return (value);
}

void Fixed::setRawBits( int const raw ) {
	this->value = raw;
}
Fixed::Fixed(const int nbrInt) {
	this->value = nbrInt << 8;
    std::cout <<"Int constructor called" << std::endl;
}
Fixed::Fixed(const float nbrFloat) {
    this->value = roundf(nbrFloat * 256);
    std::cout <<"Float constructor called"<< std::endl;
}
int Fixed:: toInt( void ) const {
    return ((int )value / 256);
}
float Fixed:: toFloat( void ) const {
    return ((float)value / 256);
}
std::ostream &operator<<(std::ostream &output, Fixed const &fixedP) {

	output << fixedP.toFloat();
	return (output);
}
