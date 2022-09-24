/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:38:01 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/24 16:38:28 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    
    Zombie *_newzombie;

    if (N < 0)
        exit(1);
     _newzombie = new(std:: nothrow) Zombie[N];
     if (!_newzombie) {
         std::cout << "no space" << std::endl;
         exit(0);
     }
    int i = 0;
   std::stringstream sso;
    while (i < N)
    {
        sso << i;
        _newzombie[i].setName(name + sso.str());
        sso.str("");
     i++;
    }
    return (_newzombie);
}
