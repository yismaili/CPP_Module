/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili <yismaili@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:02:20 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/05 21:26:04 by yismaili         ###   ########.fr       */
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
    while ((lenWord = line.find(s1, lenWord)) >= 0) { /* Find value in range */
		newLine = line.substr(0, lenWord);/*replece in new buff */
		newLine += s2; /* add new word to the renge */
		lenWord += s1.length(); /* add len of s1 to len wprd */
		newLine += line.substr(lenWord); /* copy all the line in newline */
		line = newLine;
    }
    return (line);
}

void	replace::replaceStr() {
    
	std::string		line;
	std::ifstream	inFile(fileName); /* reading input from a file */
	std::ofstream	outFile; /* for output to a file */

	if (!inFile.is_open()) {
		std::cout << "you can't open this file "<< fileName << std::endl;
	}
	else
    {
		outFile.open(fileName+".replace", std::ios::out);
		if (!outFile.is_open()) {
			std::cout << "you can't create this file" << fileName << ".replace" << std::endl;
			exit (0);
		}
		else {
			while (getline(inFile, line)) {
				outFile <<replaceLine(line) << "\n";
			}
			inFile.close();
			outFile.close();
		}
        
    }
}
