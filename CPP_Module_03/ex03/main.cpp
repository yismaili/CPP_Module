/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:03:54 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/09 21:09:26 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {

	FragTrap objt1("objt1");
	objt1.attack(objt1.getName());
	objt1.setEnergyPoints(1);
	objt1.beRepaired(10);
	objt1.attack(objt1.getName());
	std::cout << std::endl;
	objt1.highFivesGuys();
	std::cout << std::endl;
	return (0);
}