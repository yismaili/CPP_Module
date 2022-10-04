/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:48:13 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/04 19:12:18 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "";
    std::cout <<"WrongAnimal: default constructor called"<<std::endl;
}
WrongAnimal:: WrongAnimal(const WrongAnimal &copy) {
    this->type = copy.getType();
    std::cout <<"WrongAnimal: copy constructor called"<<std::endl;
}
WrongAnimal &WrongAnimal:: operator=(const WrongAnimal &copyAssign) {
    this->type = copyAssign.getType();
    std::cout <<"WrongAnimal: copy assignment operator called"<<std::endl;
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
     std::cout <<"WrongAnimal: destructor called"<<std::endl;
}
void WrongAnimal:: setType(std::string _type) {
    this->type = _type;
}

std::string WrongAnimal:: getType() const{
    return (type);
}

void WrongAnimal:: makeSound() const{
    std::cout <<type<<"WrongAnimal: make sound"<< std::endl;
}