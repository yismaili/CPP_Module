/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:52:23 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/21 20:18:37 by yismaili         ###   ########.fr       */
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
    contact(std::string FirstName_, std::string LastName_, std::string Nickname_, std::string PhoneNumber_, std::string DarkestSecret_);
    ~contact();
    int	contact::addContact(int index_);
    void contact:: printRow(void);
    void    contact::printColumnContact(std::string contacts);
    void	contact::printContact(void);
};

#endif