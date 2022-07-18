/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:55:20 by imabid            #+#    #+#             */
/*   Updated: 2022/07/18 19:59:46 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    int N = 6;
    Zombie *Zom = zombieHorde(N,"Zombie");
    
    delete [] Zom;
    return 0;  
}
