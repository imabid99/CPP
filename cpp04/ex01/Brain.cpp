/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:51:07 by imabid            #+#    #+#             */
/*   Updated: 2022/09/10 14:49:53 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain defautl constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;   
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain Copy  constructor called" << std::endl;
     *this = other;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain " << "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
        this->ideas = other.ideas;
    }
    return *this;
}
