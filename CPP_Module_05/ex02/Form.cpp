/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:47:19 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/20 20:08:04 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :name(""),signed_(0),gradeSign(0),gradeExecute(0)
{
    
}
Form::Form(const std::string _name, bool _signed, const int _gradeSign, const int _gradeExecute) 
:name(_name), signed_(_signed),gradeSign(_gradeSign) ,gradeExecute(_gradeExecute)
{
    if (this->gradeSign < 1 ) {
        throw(GradeTooLowException());
    }
    if (this->gradeSign> 150) {
        throw(GradeTooLowException());
    }
    std::cout <<"Default constructor called"<<std::endl;
}
Form::Form(Form const &copy)
:name(copy.name), signed_(copy.signed_),gradeSign(copy.gradeSign) ,gradeExecute(copy.gradeExecute)
{
    if (this->gradeSign < 1) {
        throw(GradeTooLowException());
    }
    if (this->gradeSign> 150) {
        throw(GradeTooLowException());
    }
    std::cout <<"Copy constructor called"<<std::endl;
}
Form &Form::operator=(Form const &copyAssig)
{
    if (this->gradeSign < 1) {
        throw(GradeTooLowException());
    }
    if (this->gradeSign> 150) {
        throw(GradeTooLowException());
    }
    std::cout <<"Copy assignment operator called"<<std::endl;
    this->signed_=copyAssig.signed_;
    return (*this);
}

Form::~Form()
{
}

std::string Form:: getName() const {
    return (name);
}

bool Form:: getSigned() const{
    return (signed_);
}

 int Form:: getGradeSign() const{
    return (gradeSign);
}

int Form:: getGradeExecute() const {
    return (gradeExecute);
}

const char * Form::GradeTooLowException::what() const throw() {
	return ("grade is low");
}

const char * Form::GradeTooHighException::what() const throw() {
	return ("grade is high");
}
const char * Form::FormNotSigned::what() const throw() {
    return ("This form is not signed");
}

std::ostream &operator<<(std::ostream &outPutStrm, const Form &refr) {
	outPutStrm << refr.getName()<< ", Form grade sign " <<refr.getGradeSign() <<"signed "
    <<refr.getSigned()<<"grade required to sign "<<refr.getGradeSign()
    <<"grade required to execute "<< refr.getGradeExecute()<< std::endl;
	return outPutStrm;
}

void Form:: beSigned(const Bureaucrat &Brcrat) {
    if (Brcrat.getGrade() <= getGradeSign()){
        this->signed_ = 1;
    }
    else{
        throw(GradeTooLowException());
    }  
}


