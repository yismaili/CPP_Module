/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:34:19 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/26 16:26:31 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form
{
private:
    std::string target;
public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string _target);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copyAssig);
    ~ShrubberyCreationForm();
    const std::string &getTarget() const;
    void setTarget(std::string _target);
    void execute(Bureaucrat const & executor) const;
    class FileError : public std::exception {
			virtual const char* what() const throw();
		};
    class FormNotSigned : public std::exception {
        virtual const char* what() const throw();
    };
};

#endif