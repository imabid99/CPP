/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:42:01 by imabid            #+#    #+#             */
/*   Updated: 2022/07/18 19:58:05 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie  *Zom = newZombie("heapZombie");
    Zombie  *Zom1 = newZombie("heapZombie1");
    randomChump("stackZombie");

    delete Zom;
    delete Zom1;
    return 0;
}