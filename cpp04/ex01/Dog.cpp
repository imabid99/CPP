/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:59:39 by imabid            #+#    #+#             */
/*   Updated: 2022/09/09 14:34:44 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog defautl constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;   
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog Copy constructor called" << std::endl;
     *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog " << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Sound of Dog" << std::endl;
}