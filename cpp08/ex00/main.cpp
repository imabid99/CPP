/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:17:55 by imabid            #+#    #+#             */
/*   Updated: 2022/09/28 18:25:56 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    int nb = 8;
    vec.push_back(2);
    vec.push_back(10);
    vec.push_back(8);
    vec.push_back(100);
    vec.push_back(30);
    if(easyfind(vec , nb) != -1)
      std::cout << "The number " << nb << " is found" << std::endl;
    else
      std::cout << "The number is not found" << std::endl;
}