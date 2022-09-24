/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:36:44 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/24 17:33:05 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name_)
{
    this->name = name_;
}
Zombie::Zombie(){
    
}
Zombie::~Zombie()
{
   std::cout << name << " is delete " << std::endl;
}
void Zombie:: announce(void) {
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie:: setName(std:: string _name) {
    name = _name;
}
