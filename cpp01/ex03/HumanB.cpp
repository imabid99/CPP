/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:19:34 by imabid            #+#    #+#             */
/*   Updated: 2022/07/19 20:17:39 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::~HumanB(){}

HumanB::HumanB(std::string n_name) : name(n_name), w(NULL)
{}

void    HumanB::setWeapon(Weapon &w_c)
{
    this->w = &w_c;
}

void HumanB::attack()
{
    if (this->w)
        std::cout<< this->name <<" attacks with his "<< this->w->getType() <<std::endl;
    else
        std::cout<< this->name <<" attacks without weapon"<< std::endl;
}