/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:34:07 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/24 21:34:36 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon &weapon) : weapon_(weapon), name(name_){
    
}
HumanA::~HumanA()
{
}
void HumanA:: attack() {
     std::cout << name << "attacks with their" << weapon_.getType() << std::endl;
}