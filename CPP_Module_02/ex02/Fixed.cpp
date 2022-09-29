/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:49:17 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/29 13:01:25 by yismaili         ###   ########.fr       */
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

Fixed::Fixed(Fixed const &object)
{
    *this = object;
}

void Fixed::operator=(Fixed const &object) {
    this->value = object.getRawBits();
}

int Fixed::getRawBits(void) const{
    return (value);
}

void Fixed:: setRawBits(int const raw) {
    value = raw;
}

Fixed::Fixed(const int nbrInt) {
    value = nbrInt << bits;
}

Fixed:: Fixed(const float nbrFloat) {
    value = roundf(nbrFloat * 256);
}

int Fixed:: toInt(void) const{
    return (value >> bits);
}

float Fixed:: toFloat () const{
    return ((float)value / 256);
}

std:: ostream &operator<<(std::ostream &outputStream, Fixed const &fixedPoint) {
    outputStream << fixedPoint.toFloat();
    return (outputStream);
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
    return (++value);
}

Fixed Fixed::operator++(int) {
    Fixed ptr;
    ptr.value = value++;
    return (ptr);
}

Fixed Fixed::operator--() {
    return (--value);
}

Fixed Fixed::operator--(int) {
    Fixed ptr;
    ptr.value = value--;
    return (ptr);
}
 
 /* static member function min */
  
Fixed Fixed:: min(Fixed &object0, Fixed &object1) {
    if (object0 > object1)
        return (object1);
    else
        return (object0);
}