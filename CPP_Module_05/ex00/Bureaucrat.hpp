/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:45:30 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 17:57:15 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
     std:: string Name;
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
	const std::string &getName() const;
    int getGrade()const;
    int incrementGrade();
    int decrementGrade();
};
std::ostream &operator<<(std::ostream &outPutStrm, const Bureaucrat &refr);
#endif