//
// Created by Djevayo Pattij on 1/12/20.
//

#include "Zombie.hpp"
#include <iostream>
#include <string>

void Zombie::announce()
{
    std::cout << '<'
              << _name
              << " (" << _inner_type << ")> Bruuuuuuhhhhhhh..."
              << std::endl;
}

void Zombie::set_type(int value)
{
    _inner_type = value;
}

void Zombie::set_name(std::string& name)
{
    _name = name;
}
