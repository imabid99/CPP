/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:55:20 by imabid            #+#    #+#             */
/*   Updated: 2022/07/05 10:55:42 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *Zom = new Zombie[N];
    int i = -1;
    while(++i < N)
    {
        Zom[i].nameit(name);
        Zom[i].announce();
    }
    return Zom;
}

int main()
{
    int N = 8;
    Zombie *Zom = zombieHorde(N,"Yoyo");
    
    delete [] Zom;
    return 0;  
}
