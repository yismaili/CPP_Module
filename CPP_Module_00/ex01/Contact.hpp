/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:52:23 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/22 17:35:12 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <sstream>

class contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkestSecret;
    int         Index;
public:
    contact();
    ~contact();
    int     addContact(int index_);
    void    printDataRow(void);
    void    printColumnContact(std::string contacts);
    void    printContact(void);
};

#endif