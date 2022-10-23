/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:52:10 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/23 23:24:44 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    Brain(const Brain  &copy);
    Brain &operator=(const Brain &copyAssign);
    ~Brain();
   // std::string getIdeas() const;
};
//std::ostream &operator<<(std::ostream &outPutStrm, const Brain &refr);
#endif
