/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:42:01 by imabid            #+#    #+#             */
/*   Updated: 2022/07/04 18:44:31 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie  *Zom = newZombie("heapZombie");
    Zombie  *Zom1 = newZombie("heapZombie1");
    randomChump("stackZombie");
    // std::cout << name << s  td::endl;
    delete Zom;
    // Zom.announce(); 
    return 0;
}