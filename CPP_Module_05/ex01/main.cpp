/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:10:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 15:54:51 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) 
{
	try
	{
		Form	form("Form",0,10, 10);
		Bureaucrat	objt1("objt1", 9);
		Bureaucrat	objt2("objt2", 50);
		objt1.signForm(objt1, form);
		objt2.signForm(objt2, form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
