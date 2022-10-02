/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:03:54 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/02 10:51:32 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {

	ScavTrap objt1("objt1");
	objt1.attack(objt1.getName());
	objt1.setEnergyPoints(1);
	std::cout << std::endl;
	objt1.guardGate();
	std::cout << std::endl;
	return (0);
}