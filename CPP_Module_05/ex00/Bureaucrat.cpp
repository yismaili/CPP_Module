/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:00:34 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 15:50:32 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
    std::cout <<"Default constructor called"<<std::endl;
}
Bureaucrat::Bureaucrat(const std:: string name, int grade) :Name(name)
{  if (grade < 1) {
        throw(GradeTooHighException());
    }
    if (grade > 150) {
        throw(GradeTooLowException());
    }
    this->Grade = grade;
    std::cout <<"Constructor called"<<std::endl;
}
Bureaucrat::Bureaucrat(Bureaucrat const &copy) :Name(copy.Name)
{
   *this = copy;
    std::cout <<"Copy constructor called"<<std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copyAssig) {
  
    this->Grade = copyAssig.Grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout <<"Destructor called" <<std::endl;
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade to low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade to high";
}

int Bureaucrat::getGrade() const {
    return(Grade);
}
 const std::string &Bureaucrat::getName() const{
    return (Name);
 }
 int Bureaucrat::incrementGrade() {
    this->Grade++;
    if (this->Grade < 1) {
        throw(GradeTooHighException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
    return(0);
 }
 
 int Bureaucrat::decrementGrade() {
    this->Grade--;
    if (this->Grade < 1) {
        throw(GradeTooHighException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
    return(0);
 }
 
std::ostream &operator<<(std::ostream &outPutStrm, const Bureaucrat &refr) {
	outPutStrm << refr.getName()<< ", bureaucrat grade " <<refr.getGrade() << std::endl;
	return outPutStrm;
}
