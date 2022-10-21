/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:29:19 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 16:19:35 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "";
    std::cout <<"WrongCat: default constructor called"<<std::endl;
}

WrongCat:: WrongCat(const WrongCat &copy) {
    this->type = copy.getType();
    std::cout <<"WrongCat: copy constructor called"<<std::endl;
}
WrongCat &WrongCat:: operator=(const WrongCat &copyAssign) {
    this->type = copyAssign.getType();
    std::cout <<"WrongCat: copy assignment operator called"<<std::endl;
    return (*this);
}
WrongCat::~WrongCat()
{
    std::cout <<"WrongCat: destructor called"<<std::endl;
}

void WrongCat::makeSound() {
	std::cout << type <<" meiaw"<< std::endl;
}

