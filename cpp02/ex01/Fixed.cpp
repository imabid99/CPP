/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:02:40 by imabid            #+#    #+#             */
/*   Updated: 2022/09/11 19:58:17 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fix_p = 0;
}

Fixed::Fixed(int raw)
{
    std::cout << "Int constructor called" << std::endl;
    fix_p = raw << frac_bits; 
}

Fixed::Fixed(float raw)
{
    std::cout << "Float constructor called" << std::endl;
    fix_p = (int)roundf(raw * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
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

int Fixed::toInt(void) const
{
    return (this->fix_p) / (1 << frac_bits);
}

float Fixed::toFloat(void) const
{
    return float(this->fix_p) / (1 << frac_bits);
}

std::ostream&   operator<<(std::ostream &out, const Fixed &fixed)
 {
    out << fixed.toFloat();
    return out;
}  