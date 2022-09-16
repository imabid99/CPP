/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 10:37:49 by imabid            #+#    #+#             */
/*   Updated: 2022/09/16 10:45:17 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    try
    {
        Bureaucrat tooHigh("tooHigh", 0);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat Bu("imad", 2);
        std::cout << Bu ;
        Bu.inc();
        std::cout << Bu.getGrade() << std::endl;
        std::cout << Bu ;
        Bu.inc();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat Bu("imad", 2);
        std::cout << Bu ;
        Bu.dec();
        std::cout << Bu.getGrade() << std::endl;
        std::cout << Bu ;
        Bu.inc();
        std::cout << Bu ;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }

	return 0;
}