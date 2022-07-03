#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string)
{
    std::cout << "hello" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "Destroyed" << name << std::endl;
}
void Zombie::announce()
{
    std::cout << "im here" << std::endl;
}