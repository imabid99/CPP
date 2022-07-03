/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:55:20 by imabid            #+#    #+#             */
/*   Updated: 2022/07/03 17:13:11 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    int N = 3;
    // int i = -1;
    Zombie *Zom = zombieHorde(N,"imad");
    // while(++i < N)
    //     zom[i].announce();

    delete [] Zom;
    return 0;
    
}
