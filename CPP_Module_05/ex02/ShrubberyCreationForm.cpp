/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:09:51 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 16:26:18 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm()
{
    this->target = "";
    std::cout <<"Default constructor of Shrubbery Creation Form called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target):Form(getTarget(), 0, 145, 137)
{
    this->target = _target;
    std::cout <<"Constructor Shrubbery of Creation Form called"<<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):Form(getTarget(), 0, 145, 137)
{
    this->target = copy.getTarget();
    std::cout <<"Copy constructor of Shrubbery Creation Form called"<<std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copyAssig){
    this->target = copyAssig.getTarget();
  //  std::cout <<"Shrubbery Creation Form assignment operator called"<<std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout <<"Destructor of Shrubbery Creation Form called"<<std::endl;
}
 
 const std::string &ShrubberyCreationForm:: getTarget() const{
    return (target);
 } 
 
 void ShrubberyCreationForm::setTarget(std::string _target) {
    this->target = _target;
 }

 void ShrubberyCreationForm:: execute(Bureaucrat const & executor) const{
    std::ofstream	outPut; /*ofstream or fstream object used to open a file for writing*/
    
    if (!getSigned()){
        throw(FormNotSigned());
    }
    if (getGradeExecute() < executor.getGrade()){
        throw(GradeTooLowException());
    }
    outPut.open(getTarget() + "_shrubbery");
	if (!outPut.is_open() || !outPut.good()) /* check if the stream is good enough to work */
		throw (FileError());
outPut<<"	           \"/ |    |/\n";
outPut<<"        \"/ / \"||/  /_/___/_\n";
outPut<<"         \"/   |/ \"/\n";
outPut<<"    _\"__\"__\"  |  /_____/_\n";
outPut<<"           \'  | /          /\n";
outPut<<"  __ _-----`  |{,-----------~\n";
outPut<<"           \' }{\n";
outPut<<"             }{{\n";
outPut<<"             }}{\n";
outPut<<"             {{}\n";
outPut<<"      , -=-~{ .-^- _\n";
outPut<<"            `}\n";
outPut<<"             {\n";
 }
 
 const char* ShrubberyCreationForm::FileError::what() const throw() {
	return "Error !!can't open this file for writing";
}

const char *  ShrubberyCreationForm::FormNotSigned::what() const throw() {
    return ("This form is not signed");
}