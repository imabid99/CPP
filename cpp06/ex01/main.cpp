/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:46:03 by imabid            #+#    #+#             */
/*   Updated: 2022/09/20 14:16:59 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Serialization.hpp"

int main()
{
    Data    data;
    uintptr_t ptr;
    data.s = "Ahmed";
    data.n = 50;
    
    std::cout << "Name: " <<  data.s << " Age: " << data.n << std::endl;

    ptr = serialize(&data);
    Data *newdata = deserialize(ptr);
    
    std::cout << "Name: " <<  newdata->s << " Age: " << newdata->n << std::endl;
    
    return 0;
}