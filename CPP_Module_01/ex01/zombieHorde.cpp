/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:38:01 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/07 18:53:22 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    
    Zombie *_newzombie;
    
     _newzombie = new(std:: nothrow) Zombie[N];
    if (!_newzombie) {
         std::cout << "no space" << std::endl;
         exit(0);
     }
    int i = 0;
   std::stringstream sso; /* parsing inputs and converting  numbers to strings, and vice-versa */
    while (i < N)
    {
        sso << i;
        _newzombie[i].setName(name + sso.str());
        sso.str("");
        i++;
    }
    return (_newzombie);
}
