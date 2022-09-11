/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:59:29 by imabid            #+#    #+#             */
/*   Updated: 2022/09/11 17:18:53 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal defautl constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;   
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal Copy constructor called" << std::endl;
     *this = other;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal " << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

std::string Animal::getType() const 
{
    return this->type;
}

void    Animal::makeSound() const
{
    std::cout << "Sound of Animal" << std::endl;
}