/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:00:34 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/16 23:21:43 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
}
Bureaucrat::Bureaucrat(const std:: string name, int grade) :   Name(name) ,Grade(grade)
{
    if (this->Grade < 1) {
        throw(GradeTooLowException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
}
Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
   *this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copyAssig) {
    if (this->Grade < 1) {
        throw(GradeTooLowException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
    this->Grade = copyAssig.Grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high";
}


int Bureaucrat::getGrade()const {
    return(Grade);
}
 std::string Bureaucrat::getName()const{
    return (Name);
 }
 int Bureaucrat::incrementGrade() {
    if (this->Grade < 1) {
        throw(GradeTooLowException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
    this->Grade++;
    return(0);
 }
 
 int Bureaucrat::decrementGrade() {
    if (this->Grade < 1) {
        throw(GradeTooLowException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
    this->Grade--;
    return(0);
 }
std::ostream &operator<<(std::ostream &outPutStrm, const Bureaucrat &refr) {
	outPutStrm << refr.getName()<< ", bureaucrat grade " <<refr.getGrade() << std::endl;
	return outPutStrm;
}
