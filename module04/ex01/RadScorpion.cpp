//
// Created by Djevayo Pattij on 6/2/20.
//

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion()
    : Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}
