/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:08:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/07 16:31:55 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std:: string name) {
    Zombie *_newZombie;

    _newZombie = new Zombie(name);
    if (!_newZombie) {
        std::cout << "no space" << std::endl;
        exit(0);
}
return (_newZombie);
}