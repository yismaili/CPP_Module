/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:37:11 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/24 17:18:27 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string.h>
#include <sstream>
class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string _name);
    ~Zombie();
    void announce( void );
    Zombie* zombieHorde( int N, std::string name );
    void setName(std:: string _name);
};
#endif