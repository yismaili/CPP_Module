/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:10:56 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/23 22:30:00 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 Zombie *newZombie(std:: string name);
    void randomChump( std::string name );
int main (void) {
    Zombie *_zombie;
    
    randomChump("satack zombie");
    _zombie = newZombie("heap zombie");
    _zombie->announce();
    delete _zombie;
    return(0);
}