/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:51:56 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/22 16:46:16 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{
    this->FirstName = "";
    this->LastName = "";
    this->Nickname = "";
    this->PhoneNumber = "";
    this->DarkestSecret = "";
    this->Index = 0;
}

contact::~contact()
{
    return ;
}

int	contact::addContact(int index_) 
{
	this->Index = index_ + 1;
	std::cout << "Enter your first name: ";
	getline(std::cin, this->FirstName);
	std::cout << "Enter your last name: ";
	getline(std::cin, this->LastName);
	std::cout << "Enter your nickname: ";
	getline(std::cin, this->Nickname);
	std::cout << "Enter your phone number: ";
	getline(std::cin, this->PhoneNumber);
	std::cout << "Enter darkest secret: ";
	getline(std::cin, this->DarkestSecret);

	if (FirstName.length() == 0 ||  LastName.length() == 0 ||
	Nickname.length() == 0 || PhoneNumber.length() == 0 || DarkestSecret.length() == 0)
		return (0);
	return (1);
}

void contact:: printRow(void){
  	std::cout << "|" << "         " << this->Index << "|";
    printColumnContact(contact::FirstName);
    std::cout << "|";
    printColumnContact(contact::LastName);
    std::cout << "|";
    printColumnContact(contact::Nickname);
    std::cout << "|";
    printColumnContact(contact::DarkestSecret);
    std::cout << "|" << std::endl;
}

void    contact::printColumnContact(std::string contacts) {
    int i;
    int len;

    i = 0;
    len = contacts.length();
    while (i + len < 10)
    {
        std::cout << " ";
        i++;
    }
    if (len > 10)
        std::cout <<contacts.substr(0,9)<<".";
    else
        std::cout << contacts;
    
}

void	contact::printContact(void) {
	std::cout << "Index: " << Index << std::endl;
	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "Nickname: " << Nickname << std::endl;
	std::cout << "Phone Number: " << PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
}