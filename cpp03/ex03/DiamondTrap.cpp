/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:14:55 by imabid            #+#    #+#             */
/*   Updated: 2022/09/08 10:28:21 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    this->name = ClapTrap::name;
    std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(), ScavTrap()
{
    this->name = ClapTrap::name;
    std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " Destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "DiamondTrap " << "Copy constructor called" << std::endl;
     *this = other;
}


void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
[
    std::cout << "DiamondTrap is " << this->name << " and ClapTrap is" <<  ClapTrap::name << std::endl;
]