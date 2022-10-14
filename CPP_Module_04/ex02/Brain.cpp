/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:57:47 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/11 19:46:37 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout <<"Brain: default constructor called"<<std::endl;
}

Brain:: Brain(const Brain &copy) {
    *this = copy;
}

Brain &Brain:: operator=(const Brain &copyAssign) {
    int i = 0;
   while (i > 100)
   {
        this->ideas[i] = copyAssign.ideas[i];
        i++;
   }
    return (*this);
}
Brain::~Brain()
{
    std::cout <<"Brain: destructor called"<<std::endl;
}
