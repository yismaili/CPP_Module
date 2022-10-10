/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:15:54 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/10 10:18:12 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &copyAssign);
    virtual ~Animal();
    std::string getType() const;
    void setType(std::string const _type);
    virtual void makeSound() const;
};

#endif