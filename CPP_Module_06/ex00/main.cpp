/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 21:13:13 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/28 15:57:50 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void  convertToChar(std::string input) {
    
    try
    {
        int strToInt = std::stoi(input);
        if (isprint(strToInt)) {
            std::cout <<"char: '"<< static_cast<char>(strToInt) << "'" << std::endl;;
        }
        else {
            std::cout<<"char: Non displayable" <<std::endl;
        }
    }
    catch(...) {
        std::cout<<"char: impossible" <<std::endl;
    } 
}

void  convertToInt(std::string input) {
     try
    {
        int strToInt = std::stoi(input);
        std::cout <<"int: "<< strToInt <<std::endl;
    }
    catch(...) {
        std::cout<<"int: impossible" <<std::endl;
    } 
}

void  convertToFloat(std::string input) {
     try
    {
        std::cout << std::fixed; /* write floating-point values in fixed-point notation */
		std::cout.precision(1); /* How to set precision for all cout in the code block */
        float strToFloat = std::stof(input);
        std::cout <<"float: "<< strToFloat <<"f"<<std::endl;
    }
    catch(...) {
        std::cout<<"float: impossible" <<std::endl;
    }
    std::cout.clear();  
}

void  convertToDouble(std::string input) {
     try
    {
        double strToDouble = std::stod(input);
        std::cout <<"Double: "<< strToDouble <<std::endl;
    }
    catch(...) {
        std::cout<<"Double: impossible" <<std::endl;
    }  
}

int main(int argc, char **argv) {
   if (argc == 2) {
		convertToChar(argv[1]);
		convertToInt(argv[1]);
		convertToFloat(argv[1]);
		convertToDouble(argv[1]);
	}
	else {
		std::cout <<" "<<std::endl;
	}
	return (0);
}