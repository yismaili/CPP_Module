/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:51:55 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/20 18:05:57 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	Contacts[8];
	int		numberOfContect;
public:
	PhoneBook();
	~PhoneBook();
	int		add();
	void	search(int nbr);
	void	display(int nbr);
};

#endif
