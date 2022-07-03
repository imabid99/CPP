/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 18:42:20 by imabid            #+#    #+#             */
/*   Updated: 2022/07/03 15:09:44 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE
#define ZOMBIE
#include <iostream>

class Zombie
{
    private:
    std::string name;
    public:
    Zombie(std::string);
    ~Zombie();
    void    announce();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
