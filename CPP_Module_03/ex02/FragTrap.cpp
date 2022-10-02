/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:50:38 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/02 13:02:51 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    this->hitPoint = 100;
    this->energyPoints = 100;
    this->attackDamage = 50;
    std::cout <<"FragTrap constructor called" <<std::endl;
    std::cout << std::endl; 
}

FragTrap::~FragTrap()
{
    std::cout <<"FragTrap destructor called" <<std::endl;
    std::cout << std::endl; 
}

void FragTrap:: highFivesGuys(void) {
    std::cout <<"high fives" <<std::endl;
    std::cout << std::endl; 
}