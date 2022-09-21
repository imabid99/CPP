/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:20:19 by imabid            #+#    #+#             */
/*   Updated: 2022/09/21 15:34:57 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T> 
void swap(T &x, T &y)
{
    T z;
    z = x;
    x = y;
    y = z;
}

template <typename T> 
T max(T x, T y)
{
    if(x > y)
        return x;
    return y;
}

template <typename T> 
T min(T x, T y)
{
    if(x < y)
        return x;
    return y;
}

#endif