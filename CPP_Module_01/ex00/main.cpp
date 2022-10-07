/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:10:56 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/07 16:41:35 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
    Zombie *zmb;
    randomChump("satack zombie");
    zmb = newZombie("heap zombie");
    zmb->announce();
    delete zmb;
    return(0);
}