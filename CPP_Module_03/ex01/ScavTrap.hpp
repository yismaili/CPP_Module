/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:41:19 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/02 10:13:12 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
class ScavTrap :public ClapTrap
{
public:
   // ScavTrap(ScavTrap &copy);
    ScavTrap(std::string _name);
    ~ScavTrap();
     ScavTrap operator=(ScavTrap assign);
     void attack(std::string target);
     void guardGate();
};

#endif