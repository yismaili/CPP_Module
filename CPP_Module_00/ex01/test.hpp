/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:20:59 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/21 16:37:16 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
#define TEST_HPP
#include <string.h>
#include <iostream>

class test
{
public:
    std::string name;
    int         number;
public:
   test(std::string name_, int number_);
    ~test();
    void printData(std::string name_, int number_);
};


#endif /* test */