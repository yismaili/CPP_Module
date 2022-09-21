/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:38:33 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/21 15:25:54 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

class test
{
public:
    std::string name;
    int         number;
public:
    test(std::string name_, int number_);
    ~test();
void printData(std::string name_, int number_){
   std:: cout <<"my name is " << name_ << std:: endl;
   std:: cout << "my number is " << number_ << std:: endl; 
}
};

test::test(std::string name_, int number_)
{
    this->name = name_;
    this->number = number_;
}
test::~test()
{
 std:: cout <<"I am her" << std:: endl;
}
int main(void)
{
    test opj_1("younes", 18);
    opj_1.printData("ismaili", 18);
}