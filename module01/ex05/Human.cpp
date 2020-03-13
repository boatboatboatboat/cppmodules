//
// Created by Djevayo Pattij on 3/10/20.
//

#include "Human.hpp"

std::string Human::identify() const
{
    return _brain.identify();
}

const Brain& Human::getBrain()
{
    return _brain;
}
