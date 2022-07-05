#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    announce();
    // std::cout << name << std::endl;
}
Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed" << std::endl;
}
void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}