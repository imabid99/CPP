/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 17:04:43 by imabid            #+#    #+#             */
/*   Updated: 2022/07/05 10:05:15 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class   Zombie
{
    private:
    std::string name;
    public:
    void announce();
    void nameit(std::string name);
    Zombie();
    ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );
#endif