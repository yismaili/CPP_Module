/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:41:03 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/09 20:38:41 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    this->hitPoint = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout <<"ScavTrap init constructor called" <<std::endl;
    std::cout << std::endl; 
}

ScavTrap:: ScavTrap(ScavTrap const &copy) : ClapTrap(copy)
{
    std::cout <<"ScavTrap Copy constructor called" <<std::endl;
    std::cout << std::endl;
    this->name = name + "Scav";
    this->hitPoint=getHitPoint();
    this->energyPoints=getEnergyPoints();
    this->attackDamage=getAttackDamage();
}

ScavTrap &ScavTrap::operator=(ScavTrap  const &copy) {
    std::cout <<" ScavTrap Copy assignment operators called" <<std::endl;
    std::cout << std::endl;
    ClapTrap::operator=(copy);
    return (*this);
}

ScavTrap::~ScavTrap()
{
     std::cout <<"ScavTrap destructor called" <<std::endl;
     std::cout << std::endl;
}
 void ScavTrap::attack(std::string target) {
     if (getHitPoint() == 0 || getEnergyPoints() == 0) {
         std::cout <<getName() << " ScavTrap is out points range" << std::endl;
     }
     else {
          std:: cout << "ScavTrap  " <<getName() <<"  attacks  " <<target<< "  causing  " <<getAttackDamage() << " points of damage! "<< std::endl;
          setEnergyPoints(getEnergyPoints()-1);
          std::cout << std::endl;
     }
 }
 void ScavTrap:: guardGate() {
     std::cout<<getName();
     std::cout << " That ScavTrap is now in Gatekeeper mode!" << std::endl; 
 }
