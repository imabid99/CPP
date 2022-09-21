/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:20:21 by imabid            #+#    #+#             */
/*   Updated: 2022/09/21 18:16:23 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T> 
void iter(T *Ar, int length, void  (*f)(T const &))
{
    for(int i = 0; i < length; i++)
        f(Ar[i]);  
}


#endif