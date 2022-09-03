/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:02:17 by imabid            #+#    #+#             */
/*   Updated: 2022/09/03 11:44:38 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int					fix_p;
	    static const int	frac_bits = 8; 
    public:
        Fixed();
        Fixed(const int raw);
        Fixed(const float raw);
        Fixed(const Fixed &other);
        int		getRawBits(void) const;
	    void	setRawBits(int const raw);
	    Fixed &operator=(const Fixed &other);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
        Fixed   operator*(Fixed const &fix);
        Fixed   operator/(Fixed const &fix);
        Fixed   operator-(Fixed const &fix);
        Fixed   operator+(Fixed const &fix);
        bool    operator>(Fixed const &fix) const;
        bool    operator<(Fixed const &fix) const;
        bool    operator>=(Fixed const &fix) const;
        bool    operator<=(Fixed const &fix) const;
        bool    operator==(Fixed const &fix) const;
        bool    operator!=(Fixed const &fix) const;
        static Fixed    &min(Fixed &a, Fixed &b);
        static Fixed    &max(Fixed  &a, Fixed &b);
        static Fixed const    &min(Fixed const &a, Fixed const &b);
        static Fixed const   &max(Fixed const &a, Fixed const &b);
        Fixed   operator++();
        Fixed   operator--();
        Fixed   operator++(int);
        Fixed   operator--(int);
};

std::ostream     &operator<<(std::ostream &out, const Fixed &fixed);

#endif