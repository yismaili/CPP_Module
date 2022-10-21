/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:15:50 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 17:42:48 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
Animal::Animal()
{
     this->type = "";
     std::cout <<"Animal: default constructor called"<<std::endl;
}

Animal::Animal(const Animal &copy) {
     this->type = copy.getType();
     std::cout <<"Animal: copy constructor called"<<std::endl;
}

Animal &Animal:: operator=(const Animal &copyAssign) {
     this->type = copyAssign.getType();
     std::cout <<"Animal: copy assignment operator called"<<std::endl;
     return (*this);
}

Animal::~Animal()
{
     std::cout <<"Animal: destructor called"<<std::endl;
}

void Animal::setType(std::string _type) {
     this->type = _type;
}

std::string Animal::getType() const {
     return (type);
}
