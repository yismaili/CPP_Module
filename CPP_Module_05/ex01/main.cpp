/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:10:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/24 16:45:22 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) 
{
	try
	{
		Form	form("Form", 1,10, 10);
		Bureaucrat	objt1("objt1", 1);
		Bureaucrat	objt2("objt2", 50);
		std::cout << form <<std::endl;
		objt1.signForm(form);
		objt2.signForm(form);
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
