/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:02:26 by yismaili          #+#    #+#             */
/*   Updated: 2022/11/02 13:28:49 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main (void){
   	std::array<int,3>	arry = {0, 1, 2};
	std::deque<int>		dque(arry.begin(), arry.end());
	std::list<int>		lst(arry.begin(), arry.end());
	std::vector<int>	vctor(arry.begin(), arry.end());

	try {
        int i = 0;
		while(i < 4 ){
			easyfind(arry, i);
            i++;
            }
            
    }
    catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
    try {
        int i = 0;
		while(i < 3){
			easyfind(dque, i);
            i++;
        }
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
    
    try {
        int i = 0;
		while(i < 3){
			easyfind(lst, i);
            i++;
        }
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	} 
    
	try {
        int i = 0;
		while(i < 3){
			easyfind(vctor, i);
            i++;
        }
	}
	catch(const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
    return (0);
}
