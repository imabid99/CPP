/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:46:03 by imabid            #+#    #+#             */
/*   Updated: 2022/09/19 19:33:47 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Serialization.hpp"

int main()
{
    Data    data;
    uintptr_t ptr;
    data.s = "Ahmed";
    data.n = 50;
    
    std::cout << "Add " << &data << " Name: " <<  data.s << " Age: " << data.n << std::endl;

    ptr = serialize(&data);
    Data *newdata = deserialize(ptr);
    
    std::cout << "Add " << newdata << " Name: " <<  newdata->s << " Age: " << newdata->n << std::endl;
    
    return 0;
}