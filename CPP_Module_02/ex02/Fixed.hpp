/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 21:49:21 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/29 14:09:32 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>
#include <cmath>
class Fixed
{
private:
    int value;
   static const int bits = 8;
public:
    Fixed();
    ~Fixed();
   void	operator=(Fixed const  &other);
   	Fixed(const Fixed  &other);
   int getRawBits( void ) const;
    void setRawBits(int const raw);
    Fixed(const int nbrInt);
    Fixed(const float nbrFloat);
    float toFloat( void ) const;
    int toInt( void ) const;
    int operator>(Fixed const &other);
    int operator<(Fixed const &other);
    int operator>=(Fixed const &other);
    int operator<=(Fixed const &other);
    int operator==(Fixed const &other);
    int operator!=(Fixed const &other);
    float operator+(Fixed const &other);
    float operator-(Fixed const &other);
    float operator*(Fixed const &other);
    float operator/(Fixed const &other);
    Fixed operator++();
    Fixed operator++(int);
    Fixed operator--(int);
    Fixed operator--();
    Fixed &min(Fixed &object0, Fixed &object1);
    Fixed &min(Fixed const &rfnc0, Fixed const &rfnc1);
   static Fixed &max(Fixed &rfnc0, Fixed &rfnc1);
   static Fixed &max(Fixed const &rfnc0, Fixed const &rfnc1);
};
std::ostream &operator<<(std::ostream &outputStream, Fixed const &fixedPoint);
#endif