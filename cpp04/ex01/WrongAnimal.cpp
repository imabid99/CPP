/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong WrongAnimal .cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:43:17 by imabid            #+#    #+#             */
/*   Updated: 2022/09/09 16:47:30 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

 WrongAnimal::WrongAnimal() : type(" WrongAnimal ")
{
    std::cout << "WrongAnimal defautl constructor called" << std::endl;
}

 WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;   
}

 WrongAnimal::WrongAnimal(const  WrongAnimal  &other)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
     *this = other;
}

 WrongAnimal  & WrongAnimal::operator=(const  WrongAnimal  &other)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

std::string  WrongAnimal::getType() const 
{
    return this->type;
}

void     WrongAnimal::makeSound() const
{
    std::cout << "Sound of  WrongAnimal " << std::endl;
}