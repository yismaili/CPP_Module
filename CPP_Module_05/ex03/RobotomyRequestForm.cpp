/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:56:27 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 16:25:10 by yismaili         ###   ########.fr       */
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
    std::cout<<"Constructor Robotomy Request Form called"<<std::endl;
}

RobotomyRequestForm:: RobotomyRequestForm(const RobotomyRequestForm &copy):Form(getTarget(), 0, 72, 45){
    this->target = copy.target;
    std::cout <<"Copy Constructor of Robotomy Request Form called"<<std::endl;
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

const std::string &RobotomyRequestForm::getTarget() const{
    return (target);
}

void RobotomyRequestForm::setTarget(std::string _target){
    this->target=_target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    if (!getSigned()){
        throw(FormNotSigned());
    }
    if (getGradeExecute() < executor.getGrade()){
        throw(GradeTooLowException());
    }
	srand(time(0)); /* seed used to initialize random number generators */
	if (rand() % 2 == 0)
		std::cout << target << " Has been robotomized successfully.." << std::endl;
	else
		std::cout << target << " The robot1omy failed.." << std::endl;
}

const char *  RobotomyRequestForm::FormNotSigned::what() const throw() {
    return ("This form is not signed");
}
