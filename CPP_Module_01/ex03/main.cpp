/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 21:19:37 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/10 21:26:33 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob ", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim ");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }
    return 0;
}