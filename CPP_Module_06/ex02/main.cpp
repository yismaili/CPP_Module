/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaili < yismaili@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:17:07 by yismaili          #+#    #+#             */
/*   Updated: 2022/10/30 12:01:06 by yismaili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
    
    Base*	instance[3] = {new A, new B, new C};
    srand(time(0));/* seed used to initialize random number generators */
    int randNumber = rand() % 3;
    int i  = 0;
    while (i < 3)
    {
        if (i != randNumber)
        {
            delete (instance[i]);
        }
        i++;
    }
     return (instance[randNumber]);
}

void identify(Base* p) {
    A * a;
    a = dynamic_cast<A*>(p);
    if (a) {
        std::cout<<"Class A has successfull!!"<<std::endl;
    }
    B * b;
    b = dynamic_cast<B*>(p);
    if(b) {
        std::cout<<"Class B has successfull!!"<<std::endl;
    }
    C *c;
    c = dynamic_cast<C*>(p);
    if(c) {
        std::cout<<"Class C has successfull!!"<<std::endl;
    }
}

void identify(Base& p) {
    try
    {
        A a = dynamic_cast<A&>(p);
		std::cout << "Class A : Dynamic Casts with References successfull!!" << std::endl;
        return ;
    }
    catch(...)
    {
       try
       {
            B b = dynamic_cast<B&>(p);
            std::cout << "Class B : Dynamic Casts with References has successfull!!" << std::endl;
            return ;
       }
       catch(...)
       {
            try
            {
                C c = dynamic_cast<C&>(p);
                std::cout << "Class C : Dynamic Casts with References has successfull!!" << std::endl; 
                return ;
            }
            catch(const std::exception& e)
            {
                std::cout<<e.what();
            } 
       }  
    }
} 
int main( void ) {
    
  Base *base = generate();

	identify(base);
    identify(*base);
    delete (base);
   // while (1);  
}
