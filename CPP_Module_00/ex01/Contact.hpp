/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 16:57:29 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/19 19:00:50 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
   std:: string FirstName;
   std:: string LastName;
   std:: string Nickname;
   std:: string PhoneNumber;
public:
    Contact(/* args */);
    ~Contact();
};
#endif