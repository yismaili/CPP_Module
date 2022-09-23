/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:49:32 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/22 18:45:05 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "contact.hpp"
int main(void)
{
    std::string argumente;
    PhoneBook phnbk;
    int index = 0;
    
    while (1)
    {
       std::cout << "what you want?" <<std::endl;
       getline(std::cin, argumente);
       if (argumente == "ADD"){
           if (phnbk.add() == 1)
                continue;
            if (index != 8)
                index++;
       }
        else if (argumente == "SEARCH") {
            
            phnbk.searsh(index);
        }
        else if (argumente == "EXIT") {
            std::cout << "exit" << std::endl;
            return (0);
        }
        else
            std::cout <<"Invalid argument! 'ADD , SEARCH , EXIT'" << std::endl;
    }
}