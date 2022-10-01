/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:52:18 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/01 18:20:58 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap:: ClapTrap(std::string  _name)
{
    this->name = _name;
    this->hitPoint = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout <<"init constructor called" <<std::endl;
    std::cout << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout <<"Destructor called" <<std::endl;
    std::cout << std::endl;
}

void ClapTrap::setName(std::string  _name) {
   this->name = _name; 
}

std::string ClapTrap::getName(void) {
   return (name); 
}

void ClapTrap::setHitPoint(int _hitPoint) {
    if (_hitPoint < 0 || isdigit(_hitPoint)) {
        std:: cout <<"check your parameters!" << std:: endl;
        exit(0);
    }
    this->hitPoint = _hitPoint; 
}

int ClapTrap::getHitPoint(void) {
   return (hitPoint);
}

void ClapTrap:: setEnergyPoints(int _energyPoints) {
    if (_energyPoints < 0 || isdigit(_energyPoints)) {
        std:: cout <<"check your parameters!" << std:: endl;
        exit(0);
    }
     this->energyPoints = _energyPoints;
}

int ClapTrap:: getEnergyPoints(void) {
    return (energyPoints);
}

void ClapTrap:: setAttackDamage(int _attackDamage) {
     if (_attackDamage < 0 || isdigit(_attackDamage)) {
        std:: cout << "check your parameters!" << std:: endl;
        exit(0);
    }
    else
    this->attackDamage = _attackDamage;
}

int ClapTrap:: getAttackDamage(void) {
    return (attackDamage);
}

void ClapTrap:: attack(const std::string& target) {
    if (hitPoint == 0 || energyPoints == 0)
    {
        std:: cout << name << "  is out points range" << std:: endl;
        	std::cout << std::endl;
        return ;
    }
    else {
        std:: cout << "ClapTrap  " <<name <<"  attacks  " <<target<< "  causing  " <<attackDamage << " points of damage! "<< std::endl;
       	std::cout << std::endl;
        energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout<< "ClapTrap  " <<name << " amount " << amount <<" hit points " <<std::endl;
   	std::cout << std::endl;
    hitPoint -= amount;
}

void ClapTrap::beRepaired (unsigned int amount) {
    if (energyPoints != 0) {
        std:: cout <<"ClapTrap  " <<name << "  ClapTrap has benn repaired amount " << amount <<" hit points " <<std::endl;
       	std::cout << std::endl;
        hitPoint += amount;
        energyPoints--;
    }
    else {
        std::cout <<name <<"  is out points range" <<std::endl;
        	std::cout << std::endl;
    }
}
  