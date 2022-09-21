/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:20:27 by imabid            #+#    #+#             */
/*   Updated: 2022/09/21 18:26:12 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template< typename T > 
void print( T const & x ) 
{ 
    std::cout << x  << " ";
}

int main()
{
    int tab[] = { 0, 1, 2, 3, 4 };
    char tab1[] = "imabid";
    
    iter(tab, 5, print);
    std::cout << std::endl;
    iter(tab1, 6, print);

    return 0;
}