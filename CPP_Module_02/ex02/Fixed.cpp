/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:49:17 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/08 17:52:28 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(Fixed const &copy)
{
    this->value = copy.value; /* or *this->object */
}

Fixed &Fixed::operator=(Fixed const &copyAssign) {
    this->value = copyAssign.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const{
    return (value);
}

void Fixed:: setRawBits(int const raw) {
   this->value = raw;
}

Fixed::Fixed(const int nbrInt) {
    this->value = nbrInt << 8;
}

Fixed:: Fixed(const float nbrFloat) {
    this->value = roundf(nbrFloat * 256);
}

int Fixed:: toInt(void) const{
    return (value >> bits);
}

float Fixed:: toFloat () const{
    return ((float)value / 256);
}

std:: ostream &operator<<(std::ostream &output, Fixed const &fixedP) {
    output << fixedP.toFloat();
    return (output);
}

/* The 6 comparison operators : */

int Fixed::operator>(Fixed const &object) {
    if (value > object.value)
        return 1;
    else
        return 0;
}

int Fixed::operator<(Fixed const &object) {
    if (value < object.value)
        return 1;
    else
        return 0;
}

int Fixed::operator>=(Fixed const &object) {
    if (value >= object.value)
        return 1;
    else
        return 0;
}

int Fixed::operator<=(Fixed const &object) {
    if (value <= object.value)
        return 1;
    else
        return 0;
}

int Fixed::operator==(Fixed const &object) {
     if (value == object.value)
        return 1;
    else
        return 0;
}

int Fixed::operator!=(Fixed const &object) {
     if (value != object.value)
        return 1;
    else
        return 0;
}

/* The 4 arithmetic operators: */

float Fixed::operator+(Fixed const &object) {
    return ((toFloat() + object.toFloat()));
}

float Fixed::operator-(Fixed const &object) {
    return ((toFloat() - object.toFloat()));
}

float Fixed::operator*(Fixed const &object) {
    return ((toFloat() * object.toFloat()));
}

float Fixed::operator/(Fixed const &object) {
    return ((toFloat() / object.toFloat()));
}

/* The 4 increment/decrement */

Fixed Fixed::operator++() {
     ++(this->value);
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed ptr;
    ptr.value = value++;
    return (ptr);
}

Fixed Fixed::operator--() {
    --(this->value);
    return (*this);
}

Fixed Fixed::operator--(int) {
    Fixed ptr;
    ptr.value = value--;
    return (ptr);
}
 
 /* static member function min */
  
Fixed &Fixed:: min(Fixed &rfnc0, Fixed &rfnc1) {
    if (rfnc0 < rfnc1)
        return (rfnc0);
    else
        return (rfnc1);
}

 /* static member function min && constant fixed-point number */

 Fixed &Fixed:: min(Fixed const &rfnc0, Fixed const &rfnc1) {
    if ((Fixed)rfnc0 < (Fixed)rfnc1)
        return ((Fixed &)rfnc0);
    else
        return ((Fixed &)rfnc1);
}

/*  static member function max */

Fixed &Fixed:: max(Fixed &rfnc0, Fixed &rfnc1) {
    if (rfnc0 < rfnc1)
        return (rfnc1);
    else
        return (rfnc0);
}

/*  static member function max && constant fixed-point number */

Fixed &Fixed:: max(Fixed const &rfnc0, Fixed const &rfnc1) {
    if ((Fixed)rfnc0 < (Fixed)rfnc1)
        return ((Fixed &)rfnc1);
    else
        return ((Fixed &)rfnc0);
}