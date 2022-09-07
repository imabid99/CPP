/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:51:03 by imabid            #+#    #+#             */
/*   Updated: 2022/09/07 16:34:45 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->name = "default";
    std::cout << this->name << " constructor called" << std::endl;
    this->hit_point = 10;
    this->energy_point = 10;
    this->attack_damage = 0;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{

}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " <<  " Destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << this->name << "has activate the gate keeper mode" << std::endl;
}