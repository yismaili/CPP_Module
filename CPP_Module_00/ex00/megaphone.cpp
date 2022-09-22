/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:53:17 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/22 17:38:18 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using std:: cout;
using std:: cin;

int main (int ac, char **av)
{
    if (ac <= 1)
    {
        cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
        return 0;
    }
    int i = 1, j;
    while (av[i])
    {
        j = 0;
        while (av[i][j])
        {
           cout << (char) toupper(av[i][j]);
           j++;
        }
       i++; 
    }
    cout <<" "<< std::endl;
    return 0; 
}