/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:50:11 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/11 19:35:29 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
private:
    Brain *brn;
public:
    Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &copyAssign);
    ~Dog();
    void makeSound() const;
};
#endif