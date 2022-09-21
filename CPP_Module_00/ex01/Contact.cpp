/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:54:30 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/21 13:04:18 by yismaili         ###   ########.fr       */
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

Contact::~Contact(void) {
	return ;
}

int	Contact::addContact(int index_) {
	this->Index = index_ + 1;
	std::cout << "Enter your first name: ";
	getline(std::cin, this->FirstName);
	std::cout << "Enter your last name: ";
	getline(std::cin, this->LastName);
	std::cout << "Enter your nickname: ";
	getline(std::cin, this->NickName);
	std::cout << "Enter your phone number: ";
	getline(std::cin, this->PhoneNumber);
	std::cout << "Enter darkest secret: ";
	getline(std::cin, this->DarkestSecret);

	if (FirstName.length() == 0 ||  LastName.length() == 0 ||
	NickName.length() == 0 || PhoneNumber.length() == 0 || DarkestSecret.length() == 0)
		return (1);
	return (0);
}

void	Contact::printColumn(std::string str) {
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

void	Contact::printRow(void) {
	std::cout << "|" << "         " << this->Index << "|";
	printColumn(Contact::FirstName);
	std::cout << "|";
	printColumn(Contact::LastName);
	std::cout << "|";
	printColumn(Contact::NickName);
	std::cout << "|" << std::endl;
}

void	Contact::printContact(void) {
	std::cout << "Index: " << Index << std::endl;
	std::cout << "First Name: " << FirstName << std::endl;
	std::cout << "Last Name: " << LastName << std::endl;
	std::cout << "Nickname: " << NickName << std::endl;
	std::cout << "Phone Number: " << PhoneNumber << std::endl;
	std::cout << "Darkest Secret: " << DarkestSecret << std::endl;
}