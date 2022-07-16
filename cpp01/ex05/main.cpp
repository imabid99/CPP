/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 14:31:28 by imabid            #+#    #+#             */
/*   Updated: 2022/07/16 15:14:29 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl hh;
    int myints[] = { 10, 20, 50, 40,30 };
    int * p;    
    p = std::find (myints, myints+4, 30);
    if (p != myints+4)
      std::cout << "Element found in myints: " << *p << '\n';
    else
      std::cout << "Element not found in myints\n";
}