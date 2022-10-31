/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:51:42 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/31 20:37:43 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
 #include <iostream>

template <typename T> /* formula for creating a generic class or a fuction */

void swap(T &a, T &b) {
    T var;
    var = a;
    a = b;
    b = var;
}

template <typename T> 

T min (T &a, T &b) {
    if (a > b){
        return (b);
    }
    else{
        return (a);
    }
}

template <typename T> 

T max (T &a, T &b) {
    if (a > b){
        return (a);
    }
    else{
        return (b);
    }
}
#endif