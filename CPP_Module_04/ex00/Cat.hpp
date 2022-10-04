/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:56:44 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/04 17:47:12 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
class Cat : public Animal
{
private:
    /* data */
public:
    Cat();
    Cat(const Cat &copy);
   Cat &operator=(const Cat &copyAssign);
    ~Cat();
    void makeSound() const;
};
#endif