/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:47:27 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/21 13:00:09 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
   const std::string name;
   bool              signed_;
   const int         gradeSign;
   const int         gradeExecute;
public:
    Form();
    Form(std::string _name , bool _signed, const int _gradeSign, const int _gradeExecute);
    Form(Form const &copy);
    Form &operator=(Form const &copyAssig);
   virtual ~Form();
    class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
	  class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
    class FormNotSigned : public std::exception {
      virtual const char* what() const throw();
    };
    std::string getName() const;
    bool getSigned() const;
    int getGradeSign() const;
    int getGradeExecute() const;
    void beSigned(const Bureaucrat &Brcrat);
    virtual void execute(Bureaucrat const & executor) const = 0;
};

#endif