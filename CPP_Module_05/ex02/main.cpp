/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:10:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/19 13:22:42 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void) {

	try {

		Form		form("Form1", 0,10, 10);
		Bureaucrat	joe("Joe", 10);
		Bureaucrat	johnny("Johnny", 5);
		Bureaucrat	john("John", 20);

		joe.signForm(form);
		johnny.signForm(form);
		john.signForm(form);

	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	return (0);
}