/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 21:56:07 by yismaili          #+#    #+#             */
/*   Updated: 2022/11/02 21:57:44 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <deque>
# include <stack>
# include <list>

template<typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> {

public:
	MutantStack() {}
	~MutantStack() {}
	MutantStack(const MutantStack<T, C> & copy) : std::stack<T, C>::stack(copy) {}
	MutantStack<T, C> & operator=(const MutantStack<T, C> & assign) {
		std::stack<T, C>::operator=(assign);
		return *this;
	}

	typedef typename std::stack<T, C>::container_type::iterator	iterator;
	typedef typename std::stack<T, C>::container_type::reverse_iterator	reverse_iterator;
	typedef typename std::stack<T, C>::container_type::const_iterator	const_iterator;
	typedef typename std::stack<T, C>::container_type::const_reverse_iterator	const_reverse_iterator;

	iterator				begin() { return this->c.begin(); }
	reverse_iterator		rbegin() { return this->c.rbegin(); }
	const_iterator			cbegin() { return this->c.cbegin(); }
	const_reverse_iterator	crbegin() { return this->c.crbegin(); }

	iterator				end() { return this->c.end(); }
	reverse_iterator		rend() { return this->c.rend(); }
	const_iterator			cend() { return this->c.cend(); }
	const_reverse_iterator	crend() { return this->c.crend(); }

};
#endif