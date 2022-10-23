/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:29:19 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/23 16:40:10 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "";
    std::cout <<"WrongCat: default constructor called"<<std::endl;
}

WrongCat:: WrongCat(const WrongCat &copy) :WrongAnimal(copy)
{
    std::cout <<"WrongCat: copy constructor called"<<std::endl;
    this->type = copy.getType();
}
WrongCat &WrongCat:: operator=(const WrongCat &copyAssign) {
    std::cout <<"WrongCat: copy assignment operator called"<<std::endl;
    this->type = copyAssign.getType();
    return (*this);
}
WrongCat::~WrongCat()
{
    std::cout <<"WrongCat: destructor called"<<std::endl;
}

void WrongCat::makeSound() {
	std::cout << type <<" meiaw"<< std::endl;
}

