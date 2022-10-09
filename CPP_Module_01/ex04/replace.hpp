/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:00:02 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/09 21:37:24 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string.h>
#include <fstream>

class replace
{
private:
    std::string s1;
    std::string s2;
    std::string fileName;
public:
    replace(std:: string fileName_, std:: string s1_, std:: string s2_);
    ~replace();
    std::string replaceLine(std::string line);
    void replaceStr();
};

#endif