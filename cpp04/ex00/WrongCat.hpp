/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 16:43:26 by imabid            #+#    #+#             */
/*   Updated: 2022/09/09 16:50:03 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat  : public WrongAnimal
{
    public:
        WrongCat ();
        WrongCat (const WrongCat  &other);
	    WrongCat  &operator=(const WrongCat  &other);
        virtual void makeSound(void) const;
        ~WrongCat ();
};

#endif