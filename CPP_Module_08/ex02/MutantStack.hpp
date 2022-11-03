/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:56:07 by yismaili          #+#    #+#             */
/*   Updated: 2022/11/03 19:22:40 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template <typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public:
		MutantStack(/* args */){}	
		MutantStack(const MutantStack &copy): std::stack<T, container>::stack(copy){}
		MutantStack<T, container> &operator=(const MutantStack<T, container> &assignCopy)
		{
			std::stack<T,container>::operator=(assignCopy);
			return (*this);
		}
		~MutantStack(){}
		typedef typename std::stack<T, container>::container_type::iterator iterator;
		typedef typename std::stack<T, container>::container_type::reverse_iterator	reverseIterator;
		typedef typename std::stack<T, container>::container_type::const_iterator	constIterator;
		typedef typename std::stack<T, container>::container_type::const_reverse_iterator	constReverseIterator;
		
		iterator begin(){
			return (this->c.begin());
		}
		iterator end(){
			return (this->c.end());
		}
		reverseIterator rbegin(){
			return (this->c.rbegin());
		}
		reverseIterator rend(){
			return (this->c.rend());
		}
		constIterator cbegin(){
			return (this->c.cbegin());
		}
		constIterator cend() {
			return (this->c.cend());
		}
		constReverseIterator crbegin(){
			return (this->c.crbegin());
		}
		constReverseIterator crend() {
			return (this->c.crend());
		}
};
#endif