/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:00:34 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/23 23:51:56 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(/* args */)
{
    std::cout <<"Default constructor called"<<std::endl;
}
Bureaucrat::Bureaucrat(const std:: string name, int grade) :Name(name)
{  if (this->Grade < 1) {
        throw(GradeTooHighException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
    this->Grade = grade;
    std::cout <<"Constructor called"<<std::endl;
}
Bureaucrat::Bureaucrat(Bureaucrat const &copy)
{
   *this = copy;
    std::cout <<"Copy constructor called"<<std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copyAssig) {
   if (this->Grade < 1) {
        throw(GradeTooHighException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
    this->Grade = copyAssig.Grade;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout <<"Destructor called" <<std::endl;
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return "grade is low";
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return "grade is high";
}


int Bureaucrat::getGrade()const {
    return(Grade);
}
 std::string Bureaucrat::getName()const{
    return (Name);
 }
 int Bureaucrat::incrementGrade() {
     if (this->Grade < 1) {
        throw(GradeTooHighException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
    this->Grade--;
    return(0);
 }
 
 int Bureaucrat::decrementGrade() {
     if (this->Grade < 1) {
        throw(GradeTooHighException());
    }
    if (this->Grade > 150) {
        throw(GradeTooLowException());
    }
    this->Grade++;
    return(0);
 }
 
std::ostream &operator<<(std::ostream &outPutStrm, const Bureaucrat &refr) {
	outPutStrm << refr.getName()<< ", bureaucrat grade " <<refr.getGrade() << std::endl;
	return outPutStrm;
}

void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
	}
	catch (std::exception & e) {
		std::cout << Name << " could not Sign " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << Name<< " Signed " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(Form const & form) {
    try
    {
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        std::cout <<Name<< " not execute : "<<e.what()<<std::endl; 
    }
}
