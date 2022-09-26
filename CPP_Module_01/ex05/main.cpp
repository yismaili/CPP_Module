/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:02:31 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/26 15:59:09 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl opHarl;
    
    std::cout<<"'DEBUG' level:" << std::endl;
    opHarl.debug();
    std::cout<<"'INFO' level:" << std::endl;
    opHarl.info();
    std::cout<<"'WARNING' level:" << std::endl;
    opHarl.warning();
    std::cout<<"'ERROR' level:" << std::endl;
    opHarl.error();
    std::cout<<"'complain':" << std::endl;
    opHarl.complain("ERROR");
}