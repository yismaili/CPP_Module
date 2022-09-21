/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:20:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/21 19:24:24 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "contact.hpp"
class PhoneBook
{
private:
    contact contacts[8];
    int     numberOfContact;
public:
    PhoneBook(/* args */);
    ~PhoneBook();
    void PhoneBook::searsh(int number);
};

#endif