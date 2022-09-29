/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:59:55 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/29 21:04:59 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	objt0("objt0");
	ClapTrap	objt1("objt1");
    
	objt0.setAttackDamage(11);
	objt1.setAttackDamage(2);

	objt0.attack(objt1.getName());
	objt1.takeDamage(objt0.getAttackDamage());
	objt1.beRepaired(10);
	objt1.attack(objt0.getName());
	objt0.takeDamage(objt1.getAttackDamage());

    std::cout << "objt0 now has " << objt0.getHitPoint() << " points of hit and " << objt0.getEnergyPoints() << " points of energy" << std::endl;
	std::cout << std::endl;
	std::cout << "objt1 now has " << objt1.getHitPoint() << " points of hit and " << objt1.getEnergyPoints() << " points of energy" << std::endl;
	std::cout << std::endl;
	objt0.setEnergyPoints(0);
	objt0.attack(objt1.getName());
	
	return (0);
}