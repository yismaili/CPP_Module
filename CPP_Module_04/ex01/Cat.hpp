/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:56:44 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/11 19:41:06 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brn;
public:
    Cat();
    Cat(const Cat &copy);
   Cat &operator=(const Cat &copyAssign);
    ~Cat();
    void makeSound() const;
};
#endif