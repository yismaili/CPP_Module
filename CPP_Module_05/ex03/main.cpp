/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:10:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/20 18:00:19 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {

	try {
		ShrubberyCreationForm	TreePlant("tree");
		PresidentialPardonForm	Pardon("Jimmy");
		RobotomyRequestForm		Robotomize("George");
		Bureaucrat				Joe("Joe", 5);

		TreePlant.beSigned(Joe);
		Pardon.beSigned(Joe);
		Robotomize.beSigned(Joe);

		Joe.executeForm(TreePlant);
		std::cout << std::endl;
		Joe.executeForm(Pardon);
		std::cout << std::endl;
		Joe.executeForm(Robotomize);
	}
	catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}