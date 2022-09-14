/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:49 by imabid            #+#    #+#             */
/*   Updated: 2022/09/14 14:47:58 by imabid           ###   ########.fr       */
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
    try
     {
        Bureaucrat Bu("imad", 2);
        std::cout << Bu ;
        Bu.dec();
        std::cout << Bu.getGrade() << std::endl;
        std::cout << Bu ;
        std::cout << Bu.getGrade() << std::endl;
        Bu.inc();
        std::cout << Bu ;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

	return 0;
}