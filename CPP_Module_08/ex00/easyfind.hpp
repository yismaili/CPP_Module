/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:03:28 by yismaili          #+#    #+#             */
/*   Updated: 2022/11/02 16:15:17 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <list>
#include <deque>

 class OccurrenceNotFound : public std::exception{
        virtual const char* what() const throw(){
            return ("occurrence not found!");
        }
    };
template <typename T>
void easyfind(T &cntner, int elment){
   typename T::iterator itt;

    itt = std::find(cntner.begin(), cntner.end(), elment);
    if (itt == cntner.end()){
        std::cout << elment<<" ";
          throw(OccurrenceNotFound());
    }
    else{
        std::cout << elment <<" is occurrence in container"<< std::endl;
    }
}
#endif
