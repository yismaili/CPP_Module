/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:10:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 17:23:28 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void) {

	try {
                Bureaucrat      brcrt("brcrt", 19);
                PresidentialPardonForm  ppf("ppf");
                RobotomyRequestForm     rrf("rrf");
                ShrubberyCreationForm   scf("scf");

                ppf.beSigned(brcrt);
                rrf.beSigned(brcrt);
                scf.beSigned(brcrt);

                brcrt.executeForm(ppf);
                brcrt.executeForm(rrf);
                brcrt.executeForm(scf);
        }
        catch (std::exception & e) {
                std::cerr << e.what() << std::endl;
        }
        return (0);
}