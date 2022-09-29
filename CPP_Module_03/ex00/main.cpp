/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:59:55 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/29 20:30:16 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {

	ClapTrap	objt0("objt0");
	ClapTrap	objt1("objt1");

	std::cout << std::endl;

	objt0.setAttackDamage(5);
	objt1.setAttackDamage(2);

	objt0.attack(objt1.getName());
	objt1.takeDamage(objt0.getAttackDamage());
	objt1.beRepaired(10);
	objt1.attack(objt0.getName());
	objt0.takeDamage(objt1.getAttackDamage());
	
	std::cout << std::endl;

	std::cout << "objt1 now has " << objt1.getHitPoint() << " hit points and "
		<< objt1.getEnergyPoints() << " energy points!" << std::endl;
	std::cout << "And objt0 now has " << objt0.getHitPoint() << " hit points and "
		<< objt0.getEnergyPoints() << " energy points!" << std::endl;
	
	std::cout << std::endl;
	
	objt0.setEnergyPoints(0);
	objt0.attack(objt1.getName());
	
	std::cout << std::endl;

	return (0);
}