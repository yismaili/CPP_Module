/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:34:07 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/06 10:40:02 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon){
    this->name = _name;
}
HumanA::~HumanA()
{
}
void HumanA:: attack() {
     std::cout << name << "attacks with their " << weapon.getType() << std::endl;
}