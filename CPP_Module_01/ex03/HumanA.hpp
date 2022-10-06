/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:35:40 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/06 10:40:05 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string.h>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon &weapon;
    std::string name;
public:
    HumanA(std::string _name, Weapon &_weapon);
    ~HumanA();
    void attack();
};

#endif