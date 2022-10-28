/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:17:07 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/28 17:24:03 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
    
    Base*	instance[3] = {new A, new B, new C};
    srand(time(0));
    int randNumber = rand() % 3;
    int i  = 0;
    while (i < 3)
    {
        if (i == randNumber)
        {
           break;
        }
        delete (instance[i]);
        i++;
    }
     return (instance[randNumber]);
}

void identify(Base* p) {
    A * a;
    a = dynamic_cast<A*>(p);
    if (a) {
        std::cout<<"Class A has successfully!!"<<std::endl;
    }
    B * b;
     b = dynamic_cast<B*>(p);
    if(b) {
        std::cout<<"Class B has successfully!!"<<std::endl;
    }
    C *c;
     c = dynamic_cast<C*>(p);
    if(c) {
        std::cout<<"Class C has successfully!!"<<std::endl;
    }
}

void identify(Base& p) {
	Base	var;
	std::cout << "The actual type of the object is \"";
	try {
		var = dynamic_cast<A&>(p);
		std::cout << "A\"" << std::endl;
	}
	catch(std::exception &e) {
		try {
			var = dynamic_cast<B&>(p);
			std::cout << "B\"" << std::endl;
		}
		catch(std::exception &e) {
			try {
				var = dynamic_cast<C&>(p);
				std::cout << "C\"" << std::endl;
			}
			catch(std::exception &e) {
				std::cout << "Unknown\"" << std::endl;
			}
		}
	}
} 
int main( void ) {
    
    Base*	unvalidPtr = new Base;
	Base*	validPtr = generate();
	Base&	validRef = *validPtr;
	Base&	unvalidRef = *unvalidPtr;

	identify(validPtr);
	identify(validRef);
	identify(unvalidPtr);
	identify(unvalidRef);

	delete unvalidPtr;
	delete validPtr;
}
