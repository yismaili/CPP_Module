/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:38:45 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/24 17:31:53 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
 Zombie* zombieHorde( int N, std::string name );
int main (void) {
    Zombie *_zombie;
    
    _zombie = zombieHorde(5 ,"zombie ");
    int i = 0;
    while (i < 5)
    {
     _zombie[i].announce();
       i++;
    }
    delete[] _zombie;
    return(0);
}