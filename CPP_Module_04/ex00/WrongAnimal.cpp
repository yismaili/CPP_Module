/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:48:13 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/23 16:39:27 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Wrong Animal";
    std::cout <<"WrongAnimal: default constructor called"<<std::endl;
}

WrongAnimal:: WrongAnimal(const WrongAnimal &copy) {
    std::cout <<"WrongAnimal: copy constructor called"<<std::endl;
    this->type = copy.getType();
}

WrongAnimal &WrongAnimal:: operator=(const WrongAnimal &copyAssign) {
    std::cout <<"WrongAnimal: copy assignment operator called"<<std::endl;
    this->type = copyAssign.getType();
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

void WrongAnimal:: makeSound(){
    std::cout <<type<<" make sound"<< std::endl;
}