/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:56:07 by yismaili          #+#    #+#             */
/*   Updated: 2022/11/03 17:11:53 by yismaili         ###   ########.fr       */
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
	private:
	public:
		MutantStack(/* args */){}	
		MutantStack(const MutantStack &copy): std::stack<T, container>::stack(copy){}
		MutantStack<T,container> &operator=(const MutantStack<T,container> &assignCopy)
		{
			std::stack<T,container>::operator=(assignCopy);
			return (*this);
		}
		~MutantStack(){}
		typedef typename std::stack<T, container>::container_type::iterator iterator;
		iterator begin(){
			return (this->c.begin());
		}
		iterator end(){
			return (this->c.end());
		}
};
#endif