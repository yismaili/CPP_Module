/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:33:57 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/10 21:13:39 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string.h>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string type);
    ~Weapon();
    const std::string &getType();
    void setType(std::string _type);
};

#endif