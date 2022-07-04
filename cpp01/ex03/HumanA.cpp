/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 12:53:36 by imabid            #+#    #+#             */
/*   Updated: 2022/07/04 13:12:29 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::~HumanA(){};

void    HumanA::attack()
{
    std::cout << name << "  attacks with their " << Weapon.getType() << std::endl;
}







































// HumanA::HumanA(std::string _name, Weapon &weapon_type) :
// 	name(_name),
// 	weapon(weapon_type)
// {}



// #include <iostream>
// #include "HumanB.hpp"

// HumanB::HumanB(std::string _name) : name(_name)
// {}

// HumanB::~HumanB()
// {}

// void HumanB::setWeapon(Weapon &weapon_ptr)
// {
// 	weapon = &weapon_ptr;
// }

// void HumanB::attack()
// {
// 	std::cout
// 		<< name << " attacks with their " << weapon->getType()
// 	<< std::endl;
// }