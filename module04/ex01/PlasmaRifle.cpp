//
// Created by Djevayo Pattij on 3/11/20.
//

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle()
    : AWeapon("Plasma Rifle", 5, 21)
{
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
