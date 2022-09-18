/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 14:07:51 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/18 13:13:07 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
using namespace std;

class PhoneBook
{
private:
    string c_contacts;
public:
    PhoneBook(string contacts){
       c_contacts = contacts; 
    }
    ~PhoneBook();
};

PhoneBook::PhoneBook(string contacts)
{
    int i = 0;
    while (contacts[i])
        i++;
    if (i > 8)
    {
        cout << "Maximum of 8 contacts." << std::endl;
        return (0);
    }
    
}

PhoneBook::~PhoneBook()
{
}
