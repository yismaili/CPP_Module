/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:41:03 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/09 20:52:18 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    hitPoint = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout <<"ScavTrap constructor called" <<std::endl;
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
         std::cout <<getName() << "ScavTrap is out points range" << std::endl;
     }
     else {
          std:: cout << "ScavTrap  " <<getName() <<"  attacks  " <<target<< "  causing  " <<getAttackDamage() << " points of damage! "<< std::endl;
          setEnergyPoints(getEnergyPoints()-1);
          std::cout << std::endl;
     }
 }
 
 void ScavTrap:: guardGate() {
     std::cout<<getName();
     std::cout << "that ScavTrap is now in Gatekeeper mode" << std::endl; 
 }
