/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:03:51 by imabid            #+#    #+#             */
/*   Updated: 2022/09/01 21:05:40 by imabid           ###   ########.fr       */
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
    
};

std::ostream    &operator<<(std::ostream &out, const Fixed &fixed);

#endif