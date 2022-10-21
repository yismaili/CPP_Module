/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:56:27 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/20 21:09:54 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    this->target = "";
    std::cout<<"Robotomy Request Form Default Constructor called of RobotomyRequestForm"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_):Form(getTarget(), 0,72,45)
{
    this->target = target_;
    std::cout<<" Robotomy Request Form Constructor called of RobotomyRequestForm"<<std::endl;
}

RobotomyRequestForm:: RobotomyRequestForm(const RobotomyRequestForm &copy):Form(getTarget(), 0, 72, 45){
    *this = copy;
    std::cout <<"Robotomy Request Form Copy Constructor called"<<std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copyAssig){
    this->target=copyAssig.target;
    std::cout <<"Robotomy Request Form Copy assignment operator called"<<std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

std::string RobotomyRequestForm::getTarget() const{
    return (target);
}

void RobotomyRequestForm::setTarget(std::string _target){
    this->target=_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
     if (getGradeExecute() > executor.getGrade()){
        throw(GradeTooLowException());
    }
    if (!getSigned()){
        throw(FormNotSigned());
    }
    std::cout<<executor.getName()<<" executed "<<getTarget()<<std::endl;
}