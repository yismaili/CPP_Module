/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:39:51 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/20 19:06:41 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void) {
	std::string	command;
	PhoneBook	phonebook;
	int			NbrOfRows;

	NbrOfRows = 0;
	while (1) {
		std::cout << "What do you wish to do?" << std::endl;
		getline(std::cin, command);
		if (command == "add") {
			if (phonebook.add() == 1)
				continue ;
			if (NbrOfRows != 8)
				NbrOfRows++;
		}
		else if (command == "search")
			phonebook.search(NbrOfRows);
		else if (command == "exit") {
			std::cout << "exit" << std::endl;
			return (0);
		}
		else
			std::cout <<"Invalid argument!" << std::endl;
	}
	return (0);
}