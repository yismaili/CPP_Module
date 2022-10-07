/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 21:04:26 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/06 21:26:53 by yismaili         ###   ########.fr       */
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
   void	operator=(Fixed const  &capy);
   	Fixed(const Fixed  &copy);
   int getRawBits( void ) const;
   void setRawBits( int const raw );
};

#endif