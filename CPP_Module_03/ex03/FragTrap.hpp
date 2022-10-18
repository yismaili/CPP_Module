/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:50:44 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/09 21:04:36 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
    /* data */
public:
    FragTrap(std::string _name);
    FragTrap(FragTrap const &copy);
    FragTrap &operator=(FragTrap const &copyAssing);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif