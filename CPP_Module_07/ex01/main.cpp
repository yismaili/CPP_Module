/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:24:24 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/31 12:48:34 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "iter.hpp"

 int main( void ){
    int			frstArray[] = {0, 1, 2, 3, 4, 5};
	std::string		scndArray[] = {"1337", "hi", "yismail", ":)"};

    std::cout<<"array of intigers :"<<std::endl;
	iter(frstArray, 6, &displayElement);
	std::cout << std::endl;
    
    std::cout<<"array of string :"<<std::endl;
	iter(scndArray, 4, &displayElement);
    std::cout << std::endl;
    return (0);
 }  