/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:19:08 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/23 23:25:39 by yismaili         ###   ########.fr       */
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
    std::cout <<"Cat: copy constructor called"<<std::endl;
    this->brn = NULL;
    *this = copy;
}
Cat &Cat:: operator=(const Cat &copyAssign) {
    // std::cout <<"Cat: copy assignment operator called"<<std::endl;
    this->type = copyAssign.getType();
    if (brn) {  
        delete(brn);
    }
    brn = new Brain();
    *(brn) = *(copyAssign.brn);
    return (*this);
}
Cat::~Cat()
{
    delete(brn);
    std::cout <<"Cat: destructor called"<<std::endl;
}

void Cat::makeSound() const{
    std::cout <<type<<" meiaw"<<std::endl;
}
