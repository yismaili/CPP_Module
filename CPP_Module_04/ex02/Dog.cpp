/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:21:12 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/23 16:36:48 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    brn = new Brain();
    std::cout <<"Dog: default constructor called"<<std::endl;
}

Dog::Dog(const Dog &copy) :Animal(copy){
   std::cout <<"Dog: copy constructor called"<<std::endl;
   this->brn = NULL;
   *this = copy;
}
Dog &Dog:: operator=(const Dog &copyAssign) {
    std::cout <<"Dog: copy assignment operator called"<<std::endl;
    this->type = copyAssign.getType();
    delete(brn);
    brn = new Brain();
    this->brn = copyAssign.brn;
    return (*this);
}
Dog::~Dog()
{
    delete(brn);
    std::cout <<"Dog: destructor called"<<std::endl;
}

void Dog::makeSound() const{
    std::cout <<type<<" HawHaw"<<std::endl;
}
