/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:59:48 by imabid            #+#    #+#             */
/*   Updated: 2022/09/11 11:37:20 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *ba;
    public:
        Dog();
        Dog(const Dog &other);
	    Dog &operator=(const Dog &other);
        virtual void makeSound(void) const;
        virtual ~Dog();
};

#endif