/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:02:31 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/07 15:59:17 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl opHarl;
    int index = 0;
    
    if (ac != 2) {
		std::cout << "check your arguments " << std::endl;
		return (1);
	}
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    while (index < 5)
    {
        if (levels[index] == av[1])
            break;
        index++;
    } 
    switch (index)
    {
        case 0:
            {
                std::cout<<"[ DEBUG ]" << std::endl;
                opHarl.debug();
                index++;
            }
        case 1:
            {
                std::cout<<"[ INFO ]" << std::endl;
                opHarl.info();
                index++;
            }
        case 2:
            {
                std::cout<<"[ WARNING ]" << std::endl;
                opHarl.warning();
                index++;
            }
        case 3:
            {
                std::cout<<"[ ERROR ]" << std::endl;
                opHarl.error();
                break;
            }
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
        return (0);
}
