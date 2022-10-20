/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:09:51 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/20 20:58:59 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
{
    this->target = "";
    std::cout <<"Shrubbery Creation Form Default constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):Form(getTarget(), 0, 145, 137)
{
    this->target = _target;
    std::cout <<"Shrubbery Creation Form constructor called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):Form(getTarget(), 0, 145, 137)
{
    this->target = copy.getTarget();
    std::cout <<"Shrubbery Creation Form constructor called"<<std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copyAssig){
    this->target = copyAssig.getTarget();
    std::cout <<"Shrubbery Creation Form assignment operator called"<<std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
 
 std::string ShrubberyCreationForm:: getTarget() const{
    return (target);
 } 
 
 void ShrubberyCreationForm::setTarget(std::string _target) {
    this->target = _target;
 }

 void ShrubberyCreationForm:: execute(Bureaucrat const & executor) const{
    std::ofstream	outPut;
    
    if (getGradeExecute() < executor.getGrade()){
        throw(GradeTooLowException());
    }
    if (!getSigned()){
        throw(FormNotSigned());
    }
    outPut.open(target + "_shrubbery");
	if (!outPut.is_open() || !outPut.good())
		throw (FileError());
	outPut << "             *** |**** *                   " << std::endl;
	outPut << "    	      * ****|****  ***                " << std::endl;
	outPut << "          *** --*|*** }-****               " << std::endl;
	outPut << "         **--*- -||-**-_-**-_*             " << std::endl;
	outPut << "       ***  --***|- -- * ***               " << std::endl;
	outPut << "     **_-_*-_-** | *-***_-_****            " << std::endl;
	outPut << "    ** **** * - *| -  **** **-**           " << std::endl;
	outPut << "    ~__*_--***` }|{,***---***-~~           " << std::endl;
	outPut << "                }|{                		  " << std::endl;
	outPut << "                }|{                        " << std::endl;
	outPut << "                }|{                        " << std::endl;
	outPut << "                {|}                        " << std::endl;
	outPut << "          ~~~~=~{|}~~~~                    " << std::endl;
	outPut << "              [  }  ]                      " << std::endl;
	outPut << "                 {                         " << std::endl;
	outPut << "                                           " << std::endl;
 }
 const char* ShrubberyCreationForm::FileError::what() const throw() {
	return "Could not open file";
}

