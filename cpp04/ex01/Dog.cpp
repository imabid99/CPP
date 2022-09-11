/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:59:39 by imabid            #+#    #+#             */
/*   Updated: 2022/09/11 17:38:50 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    this->ba = new Brain();
    std::cout << "Dog defautl constructor called" << std::endl;
}

Dog::Dog(const Dog &other): ba(new Brain())
{
    std::cout << "Dog Copy constructor called" << std::endl;
     *this = other;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog " << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        delete this->ba;
        this->ba = new Brain(*other.ba);
        this->type = other.type;
    }
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Sound of Dog" << std::endl;
}

Dog::~Dog()
{
    delete this->ba;
    std::cout << "Dog Destructor called" << std::endl;   
}