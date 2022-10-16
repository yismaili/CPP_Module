/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 19:45:30 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/16 21:49:38 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
    const std:: string Name;
    int         Grade;
public:
    Bureaucrat();
    Bureaucrat(std:: string name, int grade);
    ~Bureaucrat();
    int getGrad(void);
    void getGrad(int grade);
};

#endif