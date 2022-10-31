/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:36:43 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/31 20:45:22 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>

class Array
{
private:
    T *array;
    int nArray;
public:
    Array(/* args */){
        this->array = NULL;
        this->nArray = 0;
    }
    Array (int n) {
        nArray = n;
        array = new T[nArray];
        if (!array){
            exit(1);
        }
    }
    Array(const Array &copy) {
        *this = copy;
    }
    Array &operator=(const Array & copyAssig) {
        nArray = copyAssig.nArray;
        array = new T[nArray];
        if (!array){
            exit(1);
        }
        int i = 0;
        while (i < nArray){
            array[i] = copyAssig.array[i];
            i++;
        }
        return (*this);
    }
    ~Array(){
        delete[] array;
    }
    T &operator[](int index){
        if(index < 0 || index >= nArray){
            throw (std::exception());
        }
        return (array[index]);
    }
    T size(void) {
        T  i =  0;
        while (this ->array[i])
        {
            i++;
        }
        return (i);
    }
};

#endif