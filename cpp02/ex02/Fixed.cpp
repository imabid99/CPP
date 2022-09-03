/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:02:52 by imabid            #+#    #+#             */
/*   Updated: 2022/09/02 16:45:56 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    fix_p = 0;
}

Fixed::Fixed(int raw)
{
    fix_p = raw << frac_bits; 
}

Fixed::Fixed(float raw)
{
    fix_p = (int)roundf(raw * (1 << frac_bits));
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
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

bool    Fixed::operator>(Fixed const &fix) const
{
    return this->fix_p > fix.getRawBits();
}

bool    Fixed::operator<(Fixed const &fix) const
{
    return this->fix_p < fix.getRawBits();
}

bool    Fixed::operator<=(Fixed const &fix) const
{
    return this->fix_p <= fix.getRawBits();
}

bool    Fixed::operator>=(Fixed const &fix) const
{
    return this->fix_p >= fix.getRawBits();
}

bool    Fixed::operator==(Fixed const &fix) const
{
    return this->fix_p == fix.getRawBits();
}

bool    Fixed::operator!=(Fixed const &fix) const
{
    return this->fix_p != fix.getRawBits();
}

Fixed   Fixed::operator*(const Fixed &fix)
{
    return this->toFloat() * fix.toFloat();
}

Fixed   Fixed::operator+(const Fixed &fix)
{
    return this->toFloat() + fix.toFloat();
}

Fixed   Fixed::operator-(const Fixed &fix)
{
    return this->toFloat() - fix.toFloat();
}

Fixed   Fixed::operator/(const Fixed &fix)
{
    return this->toFloat() / fix.toFloat();
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
    if(a > b)
        return a;
    return b;
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if(a > b)
        return a;
    return b;
}

Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    if(a > b)
        return b;
    return a;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if(a > b)
        return b;
    return a;
}

Fixed   Fixed::operator++()
{
    this->fix_p++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed a(*this);

    this->fix_p++;
    return a;
}

Fixed   Fixed::operator--()
{
    this->fix_p--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed a(*this);

    this->fix_p--;
    return a;
}