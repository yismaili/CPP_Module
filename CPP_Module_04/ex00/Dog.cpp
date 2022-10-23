/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:21:12 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/23 16:39:08 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type="Dog";
    std::cout <<"Dog: default constructor called"<<std::endl;
}

Dog::Dog(const Dog &copy) :Animal(copy){
   std::cout <<"Dog: copy constructor called"<<std::endl;
   this->type = copy.getType();
}
Dog &Dog:: operator=(const Dog &copyAssign) {
    std::cout <<"Dog: copy assignment operator called"<<std::endl;
    this->type = copyAssign.getType();
    return (*this);
}
Dog::~Dog()
{
    std::cout <<"Dog: destructor called"<<std::endl;
}

void Dog::makeSound() const{
    std::cout <<type<<" HawHaw"<<std::endl;
}
