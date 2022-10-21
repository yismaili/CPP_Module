/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:48:12 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 12:56:02 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern();
    Intern(const Intern &copy);
    Intern &operator=(const Intern &copyAssig);
    ~Intern();
    Form *makeForm(const std::string &Form, const std::string &target);
    class FormNotFound : public std::exception {
        virtual const char* what() const throw();
    };
};

#endif