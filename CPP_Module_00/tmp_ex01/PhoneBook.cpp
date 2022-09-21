/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:20:02 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/21 22:06:34 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->numberOfContact = 0;
}

PhoneBook::~PhoneBook()
{
    return ;
}

int PhoneBook::add(void)
{
    int nmbr;
    
    std::cout << "Adding a contact" << std::endl;
    if (this->contacts < 8){
        nmbr = this->contacts[this->numberOfContact].addContact(this->numberOfContact);
        if (n == 1){
            std::cout << "contact can’t have empty fields" << std::endl;
            return (1);
        }
        this->numberOfContact++;
    }
    return 0;
}

void PhoneBook::searsh(int number)
{
    int i;
    
    i = 0;
    std::cout<< "-----------------------------------------------------------" << std:: endl;
    std::cout<< "| id | First Name | Last Nmae | Nickname | Darkest Secret |" << std:: endl;
    std::cout<< "-----------------------------------------------------------" << std:: endl;
    while (i < number)
    {
        this->contacts[i].printRow();
        i++;
    }
    std::cout<< "-----------------------------------------------------------" << std:: endl;
   // this->display(number);
}
void    PhoneBook::display(int number){
    std:: string str;
    int num;
    std::stringstream ststm;
    
    num = 0;
    getline(std::cin, str);
    strstr << str;
    std::cout <<""

}