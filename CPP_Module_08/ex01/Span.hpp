/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:28:33 by yismaili          #+#    #+#             */
/*   Updated: 2022/11/02 21:29:01 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <list>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::list<int> lst;
public:
    Span();
    Span(unsigned int N_);
    Span(const Span &copy);
    Span &operator=(const Span &assigCopy);
    ~Span();
    void addNumber(int elmnt);
    class ContainerIsFull : public std::exception {
			virtual const char* what() const throw();
	};
    int shortestSpan();
    int longestSpan();
    void addManyNumbers(std::list<int>::iterator itStart,std::list<int>::iterator itEnd);
};
#endif