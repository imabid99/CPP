/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:02:40 by imabid            #+#    #+#             */
/*   Updated: 2022/07/24 13:49:50 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int raw)
{
    std::cout << "Int constructor called" << std::endl;
    fix_p = raw;
    
}

Fixed::Fixed(float raw)
{
    std::cout << "Float constructor called" << std::endl;
    fix_p = raw;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->fix_p = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->fix_p = other.getRawBits();
    return *this;   
}

int Fixed::getRawBits(void) const
{
    return this->fix_p;
}

void Fixed::setRawBits(int const raw)
{
    this->fix_p = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    
}