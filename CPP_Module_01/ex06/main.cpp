/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:02:31 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/26 16:58:47 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl opHarl;
    
    if (ac != 2) {
		std::cout << "check your arguments " << std::endl;
		return (1);
	}
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (levels[0] == av[1])
		{
            std::cout<<"[ DEBUG ]" << std::endl;
            opHarl.debug();
            std::cout<<" "<< std::endl;
            std::cout<<"[ INFO ]" << std::endl;
            opHarl.info();
            std::cout<<" "<< std::endl;
            std::cout<<"[ WARNING ]" << std::endl;
            opHarl.warning();
            std::cout<<" "<< std::endl;
            std::cout<<"[ ERROR ]" << std::endl;
            opHarl.error();
            std::cout<<" "<< std::endl;
        }
    if (levels[1] == av[1])
		{
            std::cout<<"[ INFO ]" << std::endl;
            opHarl.info();
            std::cout<<" "<< std::endl;
            std::cout<<"[ WARNING ]" << std::endl;
            opHarl.warning();
            std::cout<<" "<< std::endl;
            std::cout<<"[ ERROR ]" << std::endl;
            opHarl.error();
            std::cout<<" "<< std::endl;
        }
    if (levels[2] == av[1])
		{
            std::cout<<"[ WARNING ]" << std::endl;
            opHarl.warning();
            std::cout<<" "<< std::endl;
            std::cout<<"[ ERROR ]" << std::endl;
            opHarl.error();
            std::cout<<" "<< std::endl;
        }
    if (levels[3] == av[1])
		{
            std::cout<<"[ ERROR ]" << std::endl;
            opHarl.error();
            std::cout<<" "<< std::endl;
        }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return (0);
}
