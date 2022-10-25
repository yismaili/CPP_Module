/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:19:49 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/24 18:28:49 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    this->target = "";
    std::cout <<" Default constructor of Presidential Pardon Form called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target_):Form(getTarget(), 0, 25, 5)
{
    this->target = target_;
    std::cout <<"Constructor of Presidential Pardon Form called"<<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm  &copy):Form(copy.getTarget(), 0, 25, 5)
{
    this->target = copy.getTarget();
    std::cout <<"Copy constructor of Presidential Pardon Form called"<<std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copyAssig)
{
    Form::operator=(copyAssig); /*!!!!!!*/
    this->target = copyAssig.getTarget();
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout <<"Destructor of Presidential Pardon Form called"<<std::endl;
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