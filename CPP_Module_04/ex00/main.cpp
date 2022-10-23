/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:03:50 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/23 14:08:12 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void) {

 Animal* meta = new Animal();
 Animal* j = new Dog();
 Animal* i = new Cat();
 WrongAnimal *WrgAnimal = new WrongAnimal();
 WrongAnimal *wcat = new WrongCat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << wcat->getType()<<" "<<std::endl;

i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
WrgAnimal->makeSound();
wcat->makeSound();

delete meta;
delete j;
delete i;
delete WrgAnimal;
delete wcat;
return (0);
}