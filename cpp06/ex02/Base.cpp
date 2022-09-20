/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:54:01 by imabid            #+#    #+#             */
/*   Updated: 2022/09/20 15:09:53 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
    srand(time(0));
    int a = rand() % 3;
    switch(a)
    {
        case 0:
            return new A();
            break;
        case 1:
            return new B();
            break;
        case 2:
            return new C();
            break;
        default:
            return NULL;    
    } 
}

void identify(Base* p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);
    if(a)
        std::cout << "A" << std::endl;
    else if(b)
        std::cout << "B" << std::endl;
    else if(c)
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try{
		A &a = dynamic_cast<A &>(p);
		    std::cout << "A" << std::endl;
        // delete &a;
        (void)a;
	}
	catch(std::bad_cast &e)
    {
        std::cout << e.what() << std::endl;
    }
	try{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
        // delete &b;
        (void)b;
	}
	catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
	try{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
        // delete &c;
        (void)c;
	}
	catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl; 
    }
}
