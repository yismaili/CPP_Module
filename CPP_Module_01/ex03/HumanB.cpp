/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:11:48 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/10 21:26:06 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->nameB=name;
    this->weaponB = NULL;
}

HumanB::~HumanB()
{
}
void HumanB:: attack() {
    if (this->weaponB)
        std::cout << nameB << "attacks with their " << weaponB->getType() << std::endl;
    else   
        std::cout << nameB << " has no weapon\n";
}
void HumanB:: setWeapon(Weapon &weapon_) {
    weaponB = &weapon_;
}
