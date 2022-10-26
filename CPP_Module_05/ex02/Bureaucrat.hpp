/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:45:30 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 16:01:53 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
    const std:: string Name;
    int         Grade;
public:
    Bureaucrat();
    Bureaucrat(std:: string name, int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &copy);
    Bureaucrat &operator=(Bureaucrat const &copyAssig);
   	class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};
	class GradeTooHighException : public std::exception {
			virtual const char* what() const throw();
		};
	const std::string &getName()const;
    void signForm(Bureaucrat const &brcrat, Form &form);
    int getGrade()const;
    int incrementGrade();
    int decrementGrade();
    void executeForm(Form const & form);
};
std::ostream &operator<<(std::ostream &outPutStrm, const Bureaucrat &refr);
#endif