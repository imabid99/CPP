/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:59:36 by imabid            #+#    #+#             */
/*   Updated: 2022/09/11 11:32:07 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *ba;
    public:
        Cat();
        Cat(const Cat &other);
	    Cat &operator=(const Cat &other);
        virtual void makeSound(void) const;
        virtual ~Cat();
};

#endif