/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:19:49 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/20 21:10:12 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    this->target = "";
    std::cout <<"Presidential Pardon Form Default constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target_):Form(getTarget(), 0, 25, 5)
{
    this->target = target_;
    std::cout <<"Presidential Pardon Form constructor called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm  &copy):Form(copy.getTarget(), 0, 25, 5)
{
    this->target = copy.getTarget();
    std::cout <<"Presidential Pardon Form Copy constructor called"<<std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copyAssig)
{
      std::cout <<"Presidential Pardon Form Copy assignment operator called"<<std::endl;
      this->target = copyAssig.getTarget();
      return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
std::string PresidentialPardonForm::getTarget() const{
    return (target);
}

void PresidentialPardonForm:: execute(Bureaucrat const & executor) const{
    if (getGradeExecute() > executor.getGrade()){
        throw(GradeTooLowException());
    }
    if (!getSigned()){
        throw(FormNotSigned());
    }
    std::cout<<executor.getName()<<" executed "<<getTarget()<<std::endl;
}