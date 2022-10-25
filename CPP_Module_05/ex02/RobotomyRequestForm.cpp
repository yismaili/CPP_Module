/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:56:27 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/24 18:30:41 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    this->target = "";
    std::cout<<"Default Constructor Robotomy Request Form called"<<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target_):Form(getTarget(), 0,72,45)
{
    this->target = target_;
    std::cout<<" Constructor Robotomy Request Form called"<<std::endl;
}

RobotomyRequestForm:: RobotomyRequestForm(const RobotomyRequestForm &copy):Form(getTarget(), 0, 72, 45){
    *this = copy;
    std::cout <<" Copy Constructor of Robotomy Request Form called"<<std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copyAssig){
   // std::cout <<"Copy assignment operator of Robotomy Request Form called"<<std::endl;
    this->target=copyAssig.target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout <<"Destructor of Robotomy Request Form called"<<std::endl;
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

