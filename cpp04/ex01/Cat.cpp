/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:59:34 by imabid            #+#    #+#             */
/*   Updated: 2022/09/11 12:11:43 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    this->ba = new Brain();
    std::cout << "Cat defautl constructor called" << std::endl;
}

Cat::~Cat()
{
    delete this->ba;
    std::cout << "Cat Destructor called" << std::endl;   
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat Copy constructor called" << std::endl;
     *this = other;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat " << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Sound of Cat" << std::endl;
}