/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:19:08 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/10 11:44:51 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type="Cat";
    std::cout <<"Cat: default constructor called"<<std::endl;
}

Cat::Cat(const Cat &copy) {
    *this = copy;
      std::cout <<"Cat: copy constructor called"<<std::endl;
}
Cat &Cat:: operator=(const Cat &copyAssign) {
    this->type = copyAssign.getType();
    std::cout <<"Cat: copy assignment operator called"<<std::endl;
    return (*this);
}
Cat::~Cat()
{
    std::cout <<"Cat: destructor called"<<std::endl;
}

void Cat::makeSound() const{
    std::cout <<type<<"miew"<<std::endl;
}
