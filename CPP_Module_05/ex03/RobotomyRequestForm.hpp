/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:27:44 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/20 21:08:13 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
#define ROBOTMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm :public Form
{
private:
  std::string target;
public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target_);
    RobotomyRequestForm(const RobotomyRequestForm &copy);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &copyAssig);
    ~RobotomyRequestForm();
    std::string getTarget() const;
    void setTarget(std::string _target);
    void execute(Bureaucrat const & executor) const;
};

#endif