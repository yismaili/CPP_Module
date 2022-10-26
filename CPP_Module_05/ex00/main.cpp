/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:10:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 15:35:02 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	try
	{
		Bureaucrat	objt1("objt1", 2);
		Bureaucrat	objt2("objt2", 50);
	//objt1.getName() = "ghjdcgdfj";
		std::cout << objt1.getName() <<" before increment grade "<< objt1.getGrade() <<std::endl;
		objt1.incrementGrade();
		std::cout << objt1 <<std::endl;
		std::cout << objt2.getName() <<" before decrement grade "<< objt2.getGrade() <<std::endl;
		objt2.decrementGrade();
		std::cout << objt2 <<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}