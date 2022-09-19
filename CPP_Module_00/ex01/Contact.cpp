/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:54:30 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/19 20:41:36 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {
	Contact::FirstName = "";
	Contact::LastName = "";
	Contact::NickName = "";
	Contact::DarkestSecret = "";
	Contact::PhoneNumber = "";
	Contact::Index = 0;
}

Contact::~Contact(void) {}

void Contact:: setFirstName(string firstName)
 {
    FirstName = firstName;
 }
 string Contact:: getFirstName()
 {
     return FirstName;
 }

void Contact:: setLastName(string lastName)
 {
   LastName = lastName;
 }
string Contact:: getLastName()
 {
     return LastName;
 }
void Contact:: setFirstName(string nickname)
 {
    Nickname = nickname;
 }
string Contact:: getFirstName()
 {
     return Nickname;
 }
void Contact:: setLastName(string phoneNumber)
 {
    PhoneNumber = phoneNumber;
 }
string Contact:: getLastName()
 {
     return PhoneNumber;
 }

int	Contact::addContact(int nbr) {
	this->_Index = nbr + 1;
	std::cout << "Enter first name: ";
	getline(std::cin, this->FirstName);
	std::cout << "Enter last name: ";
	getline(std::cin, this->LastName);
	std::cout << "Enter nickname: ";
	getline(std::cin, this->NickName);
	std::cout << "Enter phone number: ";
	getline(std::cin, this->PhoneNumber);
	if (FirstName.length() == 0 ||  LastName.length() == 0 || NickName.length() == 0 || PhoneNumber.length() == 0)
		return (0);
	return (1);
}

void	Contact::printContact(std::string str) {
	int	i;
	int	size;

	i = 0;
	size = str.length();
	while (i + size < 10)
    {
		std::cout << " ";
        i++;
    }
	if (size > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << str;
}

void	Contact::printTabal(void) {
	std::cout << "|" << "         " << this->Index << "|";
	printContact(Contact::FirstName);
	std::cout << "|";
	printContact(Contact::LastName);
	std::cout << "|";
	printContact(Contact::NickName);
	std::cout << "|" << std::endl;
}

void	Contact::printContactInfo(void) {
	std::cout << "Index: " << Index << std::endl;
	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "NickName: " << NickName << std::endl;
	std::cout << "Phone Number: " << PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
}