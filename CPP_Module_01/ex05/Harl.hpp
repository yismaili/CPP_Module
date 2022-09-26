/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:02:37 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/26 15:29:33 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string.h>

class Harl
{
private:
    /* data */
public:
    Harl(/* args */);
    ~Harl();
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    void complain( std::string level );
};

#endif 