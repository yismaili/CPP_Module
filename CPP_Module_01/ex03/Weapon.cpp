/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:33:53 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/24 19:12:59 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string _type)
{
    this->type= _type;
}
Weapon::Weapon(){}
Weapon::~Weapon()
{
}
const std::string &Weapon:: getType() {
    return (type);
}
void Weapon:: setType(std::string _type) {
    this->type = _type;
}
