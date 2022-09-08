/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:14:55 by imabid            #+#    #+#             */
/*   Updated: 2022/09/08 13:11:52 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
    this->name = ClapTrap::name;
    std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
    FragTrap::hit_point = 100;
    ScavTrap::energy_point = 50;
    FragTrap::attack_damage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
    this->name = ClapTrap::name;
    ClapTrap::name = name + "_clap_name";
    std::cout << "DiamondTrap " << this->name << " constructor called" << std::endl;
    FragTrap::hit_point = 100;
    ScavTrap::energy_point = 50;
    FragTrap::attack_damage = 30;
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

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap " << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->name = other.name;
        this->hit_point = other.hit_point;
        this->energy_point = other.hit_point;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{  
    std::cout << "DiamondTrap is " << this->name << " and ClapTrap is " <<  ClapTrap::name << std::endl;
}
