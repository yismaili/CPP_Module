/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:03:50 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/04 17:03:55 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void) {
	
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	const WrongAnimal *wanimal = new WrongAnimal();
	const WrongAnimal *wcat = new WrongCat();

	std::cout << std::endl;

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << wanimal->getType() << std::endl;
	std::cout << wcat->getType() << std::endl << std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	wanimal->makeSound();
	wcat->makeSound();
	
	std::cout << std::endl;

	delete animal;
	delete cat;
	delete dog;
	delete wanimal;
	delete wcat;

	return (0);
}