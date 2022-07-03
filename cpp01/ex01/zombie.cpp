/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:06:54 by imabid            #+#    #+#             */
/*   Updated: 2022/07/03 17:17:00 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "Destroyed" << std::endl;
}
Zombie::Zombie()
{
    std::cout << "Destroyed" << std::endl;
}
void    Zombie::nameit(std::string name)
{
    name = name;
}
void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ... " << std::endl;
}