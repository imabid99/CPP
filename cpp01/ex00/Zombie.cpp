#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string)
{
    // announce()
    std::cout << "hello" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << name << "Destroyed" << std::endl;
}
void Zombie::announce()
{
    std::cout << name << ": " << std::endl;
}