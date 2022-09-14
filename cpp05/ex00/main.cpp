/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:49 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 14:44:46 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



// int main()
// {
//     // Bureaucrat b("imad",250);
//     // std::cout << b.getGrade() << std::endl;
//     // std::cout << b.getName() << std::endl;
//     try{
//         Bureaucrat("imad", 1225);
//     }catch(std::exception &e){
//         std::cout << e.what() << std::endl;
//     }
//     return 0;
// }
int main(void)
{
	// Bureaucrat tooHigh("tooHigh", 0);
	// Bureaucrat tooLow("tooLow", 160);
    try
    {
        Bureaucrat tooHigh("tooHigh", 0);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    // try{
    //     Bureaucrat b("imad",1);
    //     std::cout << b << std::endl;
    //     b.inc();
        
    // }
     try
     {
        Bureaucrat Bu("imad", 2);
        std::cout << Bu ;
        Bu.inc();
        std::cout << Bu.getGrade() << std::endl;
        std::cout << Bu ;
        std::cout << Bu.getGrade() << std::endl;
        Bu.inc();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
	// test grade change (within range)
	// std::cout << "----" << std::endl;
	// Bureaucrat okay("okay", 100);
	// std::cout << okay << std::endl;
	// okay.inc();
	// std::cout << okay << std::endl;
	// okay.dec();
	// std::cout << okay << std::endl;

	// // test grade change (out of range)
	// std::cout << "----" << std::endl;
    // Bureaucrat oka("okay", 1);
	// oka.inc();
	// std::cout << oka << std::endl;
	// oka.dec();
	// std::cout << oka << std::endl;

	// test copy & assignation operator
	// std::cout << "----" << std::endl;
	// Bureaucrat copy = Bureaucrat(tooHigh);
	// std::cout << copy << std::endl;

	// // objects are destructed automatically
	// std::cout << "----" << std::endl;

	return 0;
}