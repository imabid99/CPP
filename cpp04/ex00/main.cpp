/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imabid <imabid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:59:50 by imabid            #+#    #+#             */
/*   Updated: 2022/09/10 14:58:58 by imabid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    w->makeSound();
    // ...
    delete meta;
    delete j;
    delete i;
    delete w;
    return 0;
}
// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     const WrongAnimal *k = new WrongCat();
    
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;

//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();
//     k->makeSound();
    
//     delete k;
//     delete meta;
//     delete j;
//     delete i;
//     return (0);
// }
