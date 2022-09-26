/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:02:20 by yismaili          #+#    #+#             */
/*   Updated: 2022/09/26 11:54:39 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

replace::replace(std:: string s1_, std:: string s2_, std:: string fileName_)
{
    this->s1 = s1_;
    this->s2 = s2_;
    this->fileName = fileName_;
}

replace::~replace()
{
}

std::string	replace::replaceLine(std::string line) {
	
    int 		lenWord;
	std::string	newLine;
	
	if (s1 == "") {
		return (line);
	}
	lenWord = 0;
    while ((lenWord = line.find(s1, lenWord)) >= 0) {
		newLine = line.substr(0, lenWord);
		newLine += s2;
		lenWord += s1.length();
		newLine += line.substr(lenWord);
		line = newLine;
    }
    return (line);
}

void	replace::replaceStr() {
    
	std::string		line;
	std::ifstream	inFile(fileName);
	std::ofstream	outFile;

	if (!inFile.is_open()) {
		std::cout << "you can't open this file "<< fileName << std::endl;
	}
	else
    {
		outFile.open(fileName+".replace", std::ios::trunc);
		if (!outFile.is_open()) {
			std::cout << "you can't create this file" << fileName << ".replace" << std::endl;
			exit (0);
		}
		else {
			while (getline(inFile, line)) {
				outFile << this->replaceLine(line) << "\n";
			}
			inFile.close();
			outFile.close();
		}
        
    }
}
