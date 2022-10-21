/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:22:54 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 14:33:45 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout<<"Intern Default Constructor called"<<std::endl;
}

Intern::Intern(const Intern &copy)
{
    (void)copy;
    std::cout<<"Intern copy Constructor called"<<std::endl;
}

Intern &Intern::operator=(const Intern &copyAssig)
{
    (void)copyAssig;
    std::cout<<"Intern Copy assignment operator called"<<std::endl;
    return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(const std::string &form, const std::string &target) {
    std::string str[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form *ptr[3] = {new ShrubberyCreationForm(target),new RobotomyRequestForm(target),new PresidentialPardonForm(target)};
    
    int i = 0;
    int len = -1337;
    while (i < 3)
    {
        if (str[i] != form) {
            delete ptr[i];
        }
        else{
            std::cout<<"Intern creates "<<str[i]<<std::endl;
            len = i;
        }
        i++;
    }
    
    if (len == -1337) {
        throw(FormNotFound());
    }
    return (ptr[len]);
}

const char* Intern::FormNotFound::what() const throw() {
    return ("Form not found");
}