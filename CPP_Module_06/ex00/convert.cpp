/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:08:33 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 21:11:53 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

convert::convert()
{
}

convert::convert(std::string _str)
{
    this->str = _str;
}

convert::convert(const convert &copy)
{
    this->str = copy.str;
}

convert &convert::operator=(const convert &copyAssig) {
    this->str = copyAssig.str;
    return (*this);
}
convert::~convert()
{
}

void  convert::convertToChar() {
    
    try
    {
        int convrted;
        convrted = std::stoi(str);
        if (isprint(convrted)) {
            std::cout <<"char: "<< static_cast<char>(convrted) <<std::endl;
        }
        else {
            std::cout<<"char: Non displayable" <<std::endl;
        }
    }
    catch(...) {
        std::cout<<"char: impossible" <<std::endl;
    } 
}

void convert:: convertToInt() {
     try
    {
        int convrted;
        convrted = std::stoi(str);
        std::cout <<"int: "<< convrted <<std::endl;
    }
    catch(...) {
        std::cout<<"int: impossible" <<std::endl;
    } 
}

void convert:: convertToFloat() {
     try
    {
        float convrted;
        convrted = std::stof(str);
        std::cout<< std::fixed;
        std::cout.precision(1);
        std::cout <<"float: "<< convrted <<"f"<<std::endl;
    }
    catch(...) {
        std::cout<<"float: impossible" <<std::endl;
    }  
}

void convert:: convertToDouble() {
     try
    {
        double convrted;
        convrted = std::stof(str);
        std::cout<< std::fixed;
        std::cout.precision(1);
        std::cout <<"Double: "<< convrted <<std::endl;
    }
    catch(...) {
        std::cout<<"Double: impossible" <<std::endl;
    }  
}