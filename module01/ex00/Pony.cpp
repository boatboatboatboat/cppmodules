//
// Created by Djevayo Pattij on 1/12/20.
//

#include "Pony.hpp"
#include <iostream>

Pony::Pony()
{
    std::cout << "Created a pony" << std::endl;
    _speed = 1;
    _moved_total = 0;
}

Pony::~Pony()
{
    std::cout << "Killed a pony that moved " << _moved_total << " in total" << std::endl;
}

void Pony::walk()
{
    _moved_total += _speed;
}
