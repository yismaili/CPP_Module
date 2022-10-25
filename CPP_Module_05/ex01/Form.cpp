/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:47:19 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/24 16:52:28 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string _name, bool _signed, const int _gradeSign, const int _gradeExecute) 
:name(_name), signed_(_signed),gradeSign(_gradeSign) ,gradeExecute(_gradeExecute)
{
    std::cout <<"Default constructor of Form called"<<std::endl;
    if (this->gradeSign < 1) {
        throw(GradeTooHighException());
    }
    if (this->gradeSign > 150) {
        throw(GradeTooLowException());
    }
}
Form::Form(Form const &copy)
:name(copy.name), signed_(copy.signed_),gradeSign(copy.gradeSign) ,gradeExecute(copy.gradeExecute)
{
    std::cout <<"Copy constructor of Form called"<<std::endl;
    if (this->gradeSign < 1) {
        throw(GradeTooHighException());
    }
    if (this->gradeSign > 150) {
        throw(GradeTooLowException());
    }
}
Form &Form::operator=(Form const &copyAssig)
{
    // if (this->gradeSign < 1) {
    //     throw(GradeTooHighException());
    // }
    // if (this->gradeSign > 150) {
    //     throw(GradeTooLowException());
    // }
    this->signed_=copyAssig.signed_;
    return (*this);
}

Form::~Form()
{
    std::cout <<" Destructor of Form called"<<std::endl;
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
	return "grade of Form to low";
}

const char * Form::GradeTooHighException::what() const throw() {
	return "grade of Form to high";
}

std::ostream &operator<<(std::ostream &outPutStrm, const Form &refr) { /* operator overloading write getters for all attributes */
	outPutStrm << refr.getName()<< " Form grade sign " <<refr.getGradeSign() <<" signed "<<refr.getSigned()<<" grade required to sign "<<refr.getGradeSign()
    <<" grade required to execute  "<< refr.getGradeExecute()<< std::endl;
	return outPutStrm;
}

void Form:: beSigned(const Bureaucrat &Brcrat) {
    
    if (Brcrat.getGrade() >= getGradeSign()){
        this->signed_ = 1;
    }
    else{
        throw(GradeTooLowException());
    } 
}

