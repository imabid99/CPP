/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:19:34 by imabid            #+#    #+#             */
/*   Updated: 2022/07/05 19:22:08 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::~HumanB(){};

HumanB::HumanB(std::string n_name) : name(n_name)
{}
void    HumanB::setWeapon(Weapon &w_c)
{
    this->w = &w_c;
}
void HumanB::attack()
{
	std::cout << this->name << " attacks with their " << w->getType() << std::endl;
}