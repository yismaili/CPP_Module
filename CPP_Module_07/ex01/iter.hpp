/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:39:22 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/31 12:53:37 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T> 

void iter(T *array, int len, void (*fnct)(T elmnt))
{
    int i = 0;
    while (i < len)
    {
        fnct(array[i]);
        i++;
    }
}

template <typename T> 

void displayElement(T elmnt) {
    std::cout<< "the element : "<<elmnt<<std::endl;
}

#endif