/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:19:08 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 17:27:54 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type="Cat";
    std::cout <<"Cat: default constructor called"<<std::endl;
    brn = new Brain();
}

Cat::Cat(const Cat &copy) {
    this->type = copy.getType();
    std::cout <<"Cat: copy constructor called"<<std::endl;
}
Cat &Cat:: operator=(const Cat &copyAssign) {
    this->type = copyAssign.getType();
    std::cout <<"Cat: copy assignment operator called"<<std::endl;
    if (brn)
        delete(brn);
    brn = new Brain();
    *brn = *(copyAssign.brn);
    return (*this);
}
Cat::~Cat()
{
    std::cout <<"Cat: destructor called"<<std::endl;
}

void Cat::makeSound() const{
    std::cout <<type<<" meiaw"<<std::endl;
}
