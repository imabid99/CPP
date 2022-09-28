/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:36:26 by imabid            #+#    #+#             */
/*   Updated: 2022/09/28 18:26:43 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    try
    {
        sp.addNumber(80);
        sp.addNumber(20);
        sp.addNumber(50);
        sp.addNumber(55);
        sp.addNumber(62);
    
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    // try
    // {
    //     std::vector<int> vec;
    //     vec.push_back(10);
    //     vec.push_back(70);
    //     vec.push_back(90);
    //     sp.addNumber(vec.begin(),vec.end());
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // for (size_t i = 0; i < 5; i++)
    // {
    //     std::cout << sp[i] << std::endl;
    // }
    return 0;
}



