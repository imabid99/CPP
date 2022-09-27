/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:02:58 by imabid            #+#    #+#             */
/*   Updated: 2022/09/27 13:02:20 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

template < typename T >
int easyfind(T &vec, int nb)
{
    std::vector<int>::iterator pos;
    pos = std::find(vec.begin(), vec.end(), nb);
    if(pos != vec.end())
        return 1;
    else
        return -1;
}

#endif