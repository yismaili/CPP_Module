/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:54:08 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/25 15:16:55 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "replace.hpp"

int main(int argc, char **argv)
{
    if (argc <= 3 || argc > 4) {
        std::cout <<"check your arguments" << std::endl;
        return (0);
    }
    replace	instance(argv[1], argv[2], argv[3]);
	instance.replaceStr();
}
