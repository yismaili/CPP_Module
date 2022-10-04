/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:57:47 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/04 21:04:22 by yismaili         ###   ########.fr       */
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
    int count = 100;
    for (size_t i = 0; i < count; i++)
    {
        this->ideas[i] = copyAssign.ideas[i];
    }
    return (*this);
}
Brain::~Brain()
{
    std::cout <<"Brain: destructor called"<<std::endl;
}
