/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:00:34 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/16 21:50:00 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
}
Bureaucrat::Bureaucrat(const std:: string name, int grade) :   Name(name) ,Grade(grade)
{
   if (grade < 1 || grade > 150)
        std::cout <<" grade that ranges from 1 to 150" << std::endl;
   
}
Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
   if (this->Grade < 1 || this->Grade > 150)
        std::cout <<" grade that ranges from 1 to 150" << std::endl;
    this->Name = copy.Name;
    this->Grade = copy.Grade;
   
}
Bureaucrat::~Bureaucrat()
{
}

int Bureaucrat::getGrad(void) {
    return(Grade);
}

void Bureaucrat::getGrad(int grade) {
   this->Grade = grade;
}