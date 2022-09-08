/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:51:03 by imabid            #+#    #+#             */
/*   Updated: 2022/09/08 15:59:07 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->name = "default";
    std::cout << "ScavTrap " << this->name << " constructor called" << std::endl;
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    std::cout << "ScavTrap " << this->name << " constructor called" << std::endl;
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " <<  " Destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has activate the gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    std::cout << "ScavTrap " << "Copy constructor called" << std::endl;
     *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap " << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->name = other.name;
        this->hit_point = other.hit_point;
        this->energy_point = other.hit_point;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->hit_point && energy_point)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " , causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_point -= 1;
    }
    else
    {
         std::cout << "ScavTrap " << this->name << " can't attack" << std::endl;
    }
}