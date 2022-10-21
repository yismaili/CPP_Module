/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:03:50 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 17:24:25 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
	
	int	main(void) {

	const Animal	*animal[2];
	int i = 0;
	while (i < 2) {
		if (i % 2 == 0){
			animal[i] = new Cat();
		}
		else {
			animal[i] = new Dog();	
		}
		i++;
	}
	i = 0;
	while (i < 2) {
		std::cout << animal[i]->getType() << std::endl;
		i++;
	}
	i = 0;
	while (i < 2)
	{
		delete animal[i];
		i++;
	}
	std::cout << std::endl;

	Cat	basic;
	Cat tmp (basic);
	return (0);
}
	