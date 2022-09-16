/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:43:23 by imabid            #+#    #+#             */
/*   Updated: 2022/09/09 16:50:13 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat defautl constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;   
} 

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
     *this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "Sound of WrongCat" << std::endl;
}