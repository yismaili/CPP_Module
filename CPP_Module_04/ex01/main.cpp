/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:03:50 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/10 13:47:33 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void) {
	
	const Animal *animal = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	const WrongAnimal *WrgAnimal = new WrongAnimal();
	const WrongAnimal *wcat = new WrongCat();

	std::cout << dog->getType()<<" "<<std::endl;
	std::cout << cat->getType()<<" "<<std::endl;
	std::cout << WrgAnimal->getType()<<" "<<std::endl;
	std::cout << wcat->getType()<<" "<<std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	WrgAnimal->makeSound();
	wcat->makeSound();

	delete animal;
	delete cat;
	delete dog;
	delete WrgAnimal;
	delete wcat;

	return (0);
}