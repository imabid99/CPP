/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:00:55 by imabid            #+#    #+#             */
/*   Updated: 2022/07/03 17:14:03 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.cpp"

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