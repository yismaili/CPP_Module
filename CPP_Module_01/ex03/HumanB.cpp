/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:11:48 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/05 19:02:44 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->nameB=name;
}

HumanB::~HumanB()
{
}
void HumanB:: attack() {
     std::cout << nameB << "attacks with their " << weaponB->getType() << std::endl;
}
void HumanB:: setWeapon(Weapon &weapon_) {
    weaponB = &weapon_;
}
