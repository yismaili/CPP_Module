/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:19:00 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/20 14:34:01 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define  PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm :public Form
{
private:
    std::string target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target_);
    PresidentialPardonForm(const PresidentialPardonForm &copy);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &copyAssig);
    ~PresidentialPardonForm();
    std::string getTarget() const;
};

#endif
