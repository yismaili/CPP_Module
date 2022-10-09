/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:50:38 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/09 21:24:30 by yismaili         ###   ########.fr       */
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

FragTrap::FragTrap(FragTrap const &copy) :ClapTrap(copy){
    std::cout <<"FragTrap Copy constructor called" <<std::endl;
    std::cout << std::endl;
    this->name = name + "Frag";
    this->hitPoint=getHitPoint();
    this->energyPoints=getEnergyPoints();
    this->attackDamage=getAttackDamage();
}

FragTrap &FragTrap::operator=(FragTrap const &copyAssing) {
     std::cout <<" FragTrap Copy assignment operators called" <<std::endl;
    std::cout << std::endl;
    ClapTrap::operator=(copyAssing);
    return (*this);
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