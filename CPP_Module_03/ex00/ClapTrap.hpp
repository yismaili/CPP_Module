/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:52:51 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/29 18:35:15 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
class ClapTrap
{
private:
   std::string  name;
   int          hitPoint;
   int          energyPoints;
   int          attackDamage;
public:
    ClapTrap(std::string  _name);
    ClapTrap();
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void setName(std::string  _name);
    std::string getName(void);
    void setHitPoint(int _hitPoint);
    int getHitPoint(void);
    void setEnergyPoints(int _energyPoints);
    int  getEnergyPoints(void);
    void  setAttackDamage(int _attackDamage);
    int getAttackDamage(void);
};
#endif