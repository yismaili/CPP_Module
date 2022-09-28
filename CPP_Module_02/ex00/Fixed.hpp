/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:04:26 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/28 15:13:29 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string.h>

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
};

#endif