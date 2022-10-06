/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:08:40 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/06 10:18:41 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>
class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string _name);
    ~Zombie();
    void announce( void );
};
Zombie *newZombie(std:: string name);
void randomChump( std::string name );
#endif