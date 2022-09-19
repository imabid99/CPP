/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:21:03 by imabid            #+#    #+#             */
/*   Updated: 2022/09/19 14:23:19 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <sstream>
#include <iomanip>

class Convert
{
    private:
        int n;
        float f;
        double d;
        char c;
    public:
        Convert();
        Convert(const Convert &other);
        
        void    its_int();
        void    its_float();
        void    its_double();
        void    its_char();
	    Convert &operator=(const Convert &other);
        ~Convert();
};

#endif