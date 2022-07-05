/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:05:11 by imabid            #+#    #+#             */
/*   Updated: 2022/07/05 19:27:04 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t_type)
{
    type = t_type;
}
Weapon::~Weapon(){};

void    Weapon::setType(std::string n_type)
{
    type = n_type;   
}

std::string Weapon::getType()
{
    return type;
}
