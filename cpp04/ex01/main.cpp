/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:59:50 by imabid            #+#    #+#             */
/*   Updated: 2022/09/11 18:36:19 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    
    Animal	*a[4];

	for(int i=0; i<4; i++) {
		if (i < 2) {
			a[i] = new Cat();
		}
		else {
			a[i] = new Dog();
		}
	}
	for(int i=0; i<4; i++) {
		a[i]->makeSound();
	}
	
	for(int i=0; i<4; i++) {
		delete a[i];
	}
    
    return 0;
}