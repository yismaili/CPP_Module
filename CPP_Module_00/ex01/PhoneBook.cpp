/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:20:02 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/22 17:35:25 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    PhoneBook:: numberOfContact = 0;
}

PhoneBook::~PhoneBook()
{
    return ;
}

int PhoneBook::add(void)
{
    int nmbr;
    
    std::cout << "Adding a contact" << std::endl;
    if (this->numberOfContact < 8){
        nmbr = this->contacts_[this->numberOfContact].addContact(this->numberOfContact);
        if (nmbr == 0){
            std::cout << "contact can’t have empty fields" << std::endl;
            return (0);
        }
        this->numberOfContact++;
    }
    return 0;
}

void PhoneBook::searsh(int number)
{
    int i;
    
    i = 0;
    std::cout<< "--------------------------------------------------" << std:: endl;
    std::cout<< "| Index | First Name | Last Nmae | Phone Number |" << std:: endl;
    std::cout<< "--------------------------------------------------" << std:: endl;
    while (i < number)
    {
        this->contacts_[i].printDataRow();
        i++;
    }
    std::cout<< "--------------------------------------------------" << std:: endl;
    this->display(number);
}

void    PhoneBook::display(int number){
    std:: string str;
    int num;
    std::stringstream ststm;
    
    num = 0;
    std::cout <<"you want more info about your contact?" <<std::endl;
    getline(std::cin, str);
    ststm << str;
    if (str.length() != 0)
    {
        int i = 0;
        while (str[i])
        {
            if (std::isdigit(str[i]) == 0)
            {
                std::cout <<"you should have entered a number!" << std::endl;
                return ;
            }
            i++;
        }
        ststm  >> num;
        if (num !=0 && num <= number)
            this->contacts_[num - 1].printContact();
        else
            std::cout << "this contact not found!" <<std::endl;
    }
    else if (!std::cin.eof())
    {
        std::cout << "Enter index of a contact!" << std::endl;
        display(number);
    }

}