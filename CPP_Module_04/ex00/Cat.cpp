/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:19:08 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/23 16:38:54 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout <<"Cat: default constructor called"<<std::endl;
}

Cat::Cat(const Cat &copy):Animal(copy) 
{
    std::cout <<"Cat: copy constructor called"<<std::endl;
    *this = copy;
}
Cat &Cat:: operator=(const Cat &copyAssign) {
    std::cout <<"Cat: copy assignment operator called"<<std::endl;
    this->type = copyAssign.getType();
    return (*this);
}
Cat::~Cat()
{
    std::cout <<"Cat: destructor called"<<std::endl;
}

void Cat::makeSound() const{
    std::cout <<type<<" meiaw"<<std::endl;
}
