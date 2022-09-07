/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:50:45 by imabid            #+#    #+#             */
/*   Updated: 2022/09/07 16:31:36 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->name = "default";
    std::cout << this->name << " constructor called" << std::endl;
    this->hit_point = 10;
    this->energy_point = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    std::cout << this->name << " constructor called" << std::endl;
    this->hit_point = 10;
    this->energy_point = 10;
    this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " <<  this->name << " Destructor called" << std::endl;   
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap " <<  this->name << " Copy constructor called" << std::endl;
     *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap " <<  this->name <<  " Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->name = other.name;
        this->hit_point = other.hit_point;
        this->energy_point = other.hit_point;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->hit_point && energy_point)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_point--;
    }
    else
    {
         std::cout << "ClapTrap " << this->name << " can't attack" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->hit_point > amount && energy_point)
    {
        this->hit_point -= amount;
        std::cout << "ClapTrap " << this->name << " take damage " << amount << " and his health decreased to " << this->hit_point  << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " take damage " << amount << " and his is dead" << std::endl;
        this->hit_point = 0;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->hit_point != 0 && energy_point)
    {
        this->energy_point -= 1;
        this->hit_point += amount;
        std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " and his health increased to " << this->hit_point << std::endl;
    }
    else
    {
         std::cout << "ClapTrap " << this->name << " can't repaire" << std::endl;
    }
}

