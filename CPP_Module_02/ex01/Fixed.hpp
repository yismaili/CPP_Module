/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:00:30 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/28 21:39:33 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>
# include <cmath>

class Fixed
{
private:
    int  value;
    static const int  bits = 8;
public:
    Fixed();
    ~Fixed();
   void	operator=(Fixed const  &other);
   	Fixed(const Fixed  &other);
   int getRawBits( void ) const;
   void setRawBits( int const raw );
    Fixed(const int nbrInt);
    Fixed(const float nbrFloat);
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream &operator<<(std::ostream &outputStream, Fixed const &fixedPoint);
#endif