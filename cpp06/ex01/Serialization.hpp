/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:27:28 by imabid            #+#    #+#             */
/*   Updated: 2022/09/19 19:29:02 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>

struct Data
{
    int n;
    std::string s;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif