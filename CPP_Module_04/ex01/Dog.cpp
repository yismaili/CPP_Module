/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:21:12 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 16:17:17 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    brn = new Brain();
    std::cout <<"Dog: default constructor called"<<std::endl;
}

Dog::Dog(const Dog &copy) {
   this->type = copy.getType();
   std::cout <<"Dog: copy constructor called"<<std::endl;
   this->brn = NULL;
}
Dog &Dog:: operator=(const Dog &copyAssign) {
    this->type = copyAssign.getType();
    std::cout <<"Dog: copy assignment operator called"<<std::endl;
    if (brn)
        delete(brn);
    brn = new Brain();
    *brn = *(copyAssign.brn);
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
