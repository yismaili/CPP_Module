/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:49:17 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/28 23:45:28 by yismaili         ###   ########.fr       */
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
    this->value = nbrInt * 256;
}

Fixed:: Fixed(const float nbrFloat) {
    this->value = roundf(nbrFloat * 256);
}

int Fixed:: toInt(void) const{
    return (value / 256);
}

float Fixed:: toFloat () const{
    return ((float)value / 256);
}

std::ostream &operator<<(std::ostream &output, Fixed const &fixedP) { /* ostream operator overloading */
    output << fixedP.toFloat();
    return (output);
}

/* The 6 comparison operators : */

int Fixed::operator>(Fixed const &object) {
    if (this->value > object.value) /*this value on the current object */
        return 1;
    else
        return 0;
}

int Fixed::operator<(Fixed const &object) {
    if (this->value < object.value)
        return 1;
    else
        return 0;
}

int Fixed::operator>=(Fixed const &object) {
    if (this->value >= object.value)
        return 1;
    else
        return 0;
}

int Fixed::operator<=(Fixed const &object) {
    if (this->value <= object.value)
        return 1;
    else
        return 0;
}

int Fixed::operator==(Fixed const &object) {
     if (this->value == object.value)
        return 1;
    else
        return 0;
}

int Fixed::operator!=(Fixed const &object) {
     if (this->value != object.value)
        return 1;
    else
        return 0;
}

/* The 4 arithmetic operators: */

float Fixed::operator+(Fixed const &object) {
    return ((this->toFloat() + object.toFloat()));
}

float Fixed::operator-(Fixed const &object) {
    return ((this->toFloat() - object.toFloat()));
}

float Fixed::operator*(Fixed const &object) {
    return ((this->toFloat() * object.toFloat()));
}

float Fixed::operator/(Fixed const &object) {
    return ((this->toFloat() / object.toFloat()));
}

/* The 4 increment/decrement */

Fixed Fixed::operator++() {
    Fixed o;
    o.value = ++value;
    return (o);
}

Fixed Fixed::operator++(int) {
    Fixed objt;
    objt.value = value++;
    return (objt);
}

Fixed Fixed::operator--() {
    Fixed o;
    o.value = --value;
    return (o);
}

Fixed Fixed::operator--(int) {
   Fixed objt;
   objt.value = value--;
   return (objt);
}
 
 /* static member function min */
  
Fixed &Fixed:: min(Fixed &rfnc0, Fixed &rfnc1) {
    if (rfnc0.value < rfnc1.value)
        return (rfnc0);
    else
        return (rfnc1);
}

 /* static member function min && constant fixed-point number */

 Fixed &Fixed:: min(Fixed const &rfnc0, Fixed const &rfnc1) {
    if ((Fixed)rfnc0.value < (Fixed)rfnc1.value)
        return ((Fixed &)rfnc0);
    else
        return ((Fixed &)rfnc1);
}

/*  static member function max */

Fixed &Fixed:: max(Fixed &rfnc0, Fixed &rfnc1) {
    if (rfnc0.value < rfnc1.value)
        return (rfnc1);
    else
        return (rfnc0);
}

/*  static member function max && constant fixed-point number */

Fixed &Fixed:: max(Fixed const &rfnc0, Fixed const &rfnc1) {
    if ((Fixed)rfnc0.value < (Fixed)rfnc1.value)
        return ((Fixed &)rfnc1);
    else
        return ((Fixed &)rfnc0);
}