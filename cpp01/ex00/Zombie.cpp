#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    announce();
}

Zombie::~Zombie()
{
    std::cout << this->name << " Destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}