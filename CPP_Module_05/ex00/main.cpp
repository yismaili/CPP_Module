/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:10:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/16 23:22:05 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    try {
		Bureaucrat	a("Joe", 0);
		Bureaucrat	b("Jordan", 150);

		a.incrementGrade();
		std::cout << a << b;
		b.decrementGrade();
	}
	catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
	}

}