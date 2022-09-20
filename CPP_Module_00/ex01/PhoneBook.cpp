/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:33:37 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/20 18:07:32 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	PhoneBook::numberOfContect = 0;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

int	PhoneBook::add(void) {
	int	n;

	std::cout << "------- Adding a Contact -------" << std::endl;
	if (this->numberOfContect < 8) {
		n = this->Contacts[this->numberOfContect].addContact(this->numberOfContect);
		if (n == 1) {
			std::cout << "Your contact can't have empty fields!" << std::endl;
			return (1);
		}
		this->numberOfContect++;
	}
	else {
		this->Contacts[0].addContact(0);
		this->numberOfContect = 1;
	}
	return (0);
}

void	PhoneBook::display(int nbr) {
	std::string			str;
	int					num;
	std::stringstream	ss;
	
	std::cout << "Which Contact you want more info about?" << std::endl;
	getline(std::cin, str);
	ss << str;
	num = 0;
	if (str.length() != 0) {
		for (int i = 0; str[i] != '\0'; i++) {
			if (std::isdigit(str[i]) == 0) {
				std::cout << "You should have entered a number." << std::endl;
				return ;
			}
		}
		ss >> num;
		if (num != 0 && num <= nbr)
			this->Contacts[num - 1].printContact();
		else
			std::cout << "There is no such contact." << std::endl;
	}
	else if (!std::cin.eof()) {
		std::cout << "Please enter a valid index of a contact." << std::endl;
		this->display(nbr);
	}
}

void	PhoneBook::search(int nbr) {
	int	i = 0;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index| FirstName|  LastName|  NickName|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (i < nbr) {
		this->Contacts[i].printRow();
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	this->display(nbr);
}

