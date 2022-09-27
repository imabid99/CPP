/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 09:36:26 by imabid            #+#    #+#             */
/*   Updated: 2022/09/27 16:57:14 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
        Span sp = Span(5);
    try
    {
        sp.addNumber(80);
        sp.addNumber(40);
        sp.addNumber(50);
        sp.addNumber(60);
        sp.addNumber(62);
    
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    // std::vector<int> v(2);
    // v.push_back(20);
    // v.push_back(30);
    // for (size_t i = 0; i < v.size(); i++)
    // {
    //     std::cout << v[i] << " " << std::endl;
    // }
    // std::cout  << std::endl;
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(70);
    vec.push_back(90);
    sp.addNumber(vec.begin(),vec.end());
    // vec.insert(vec.end(),v.begin(),v.end());
    // std::sort(vec.begin(),vec.end());
    // std::vector<int>::iterator it = vec.begin();
    // for (; it != vec.end(); it++)
    // {
    //     std::cout << *it << " " << std::endl;
    // }
    
    
    return 0;
}


