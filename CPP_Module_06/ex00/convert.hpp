/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:42:53 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 21:10:58 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class convert
{
private:
    std::string str;
public:
    convert();
    convert(std::string _str);
    convert(const convert &copy);
    convert &operator=(const convert &copyAssig);
    void convertToChar();
    void convertToInt();
    void convertToFloat();
    void convertToDouble();
    ~convert();
};

#endif