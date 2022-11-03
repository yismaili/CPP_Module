/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:41:01 by yismaili          #+#    #+#             */
/*   Updated: 2022/11/03 19:29:43 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <numeric>
#include <iterator>
#include <bits/stdc++.h>

Span::Span()
{
    this->N = 0;
}

Span::Span(unsigned int N_)
{
    this->N = N_;
}

Span::Span(const Span &copy)
{
    this->N = copy.N;
}
Span &Span:: operator=(const Span &assigCopy){
    N = assigCopy.N;
    return (*this);
}
Span::~Span()
{
}

void Span::addNumber(int elmnt){
    if(lst.size() == (unsigned long)elmnt){
        throw(ContainerIsFull());
    }
    else{
        lst.push_back(elmnt);
    }
}

const char * Span::ContainerIsFull::what() const throw(){
    return ("The container is full!!");
}

int Span::shortestSpan(){
    if(lst.size() == 1 || lst.size() == 0){
        throw(ContainerIsFull());
    }
    else{
        std::vector<int> results;
        std::adjacent_difference(lst.begin(), lst.end(), std::back_inserter(results));
       int i = 0;
       while (results[i]){
        if (results[i] < 0){
           results[i] *= (-1);
        }
        i++;
       }
       int minElmnt = *min_element(results.begin(), results.end());
        return (minElmnt);
    }
}

int Span::longestSpan() {
    
    if(lst.size() == 1 || lst.size() == 0){
        throw(ContainerIsFull());
    }
    else{
        int minElmnt = *(std::min_element(lst.begin(), lst.end()));
        int maxElmnt = *(std::max_element(lst.begin(), lst.end()));
        return maxElmnt - minElmnt;
    }
}

void Span::addManyNumbers(std::list<int>::iterator itStart,std::list<int>::iterator itEnd){
    if(static_cast<int>(N - lst.size()) > (*itStart, *itEnd)){
        throw(ContainerIsFull());
    }
    else{
        lst.insert(lst.end(), itStart,itEnd);
    }
}
