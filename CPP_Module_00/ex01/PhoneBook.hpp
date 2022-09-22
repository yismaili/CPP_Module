/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:20:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/22 16:08:03 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include "contact.hpp"

class PhoneBook
{
private:
    contact contacts_[8];
    int     numberOfContact;
public:
    PhoneBook();
    ~PhoneBook();
    int     add(void);
    void    searsh(int number);
    void    display(int number);
};

#endif