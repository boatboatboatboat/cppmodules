//
// Created by Djevayo Pattij on 3/13/20.
//

#include <iostream>

using std::cout;

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
    : Enemy(170, "Super Mutant")
{
    cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
    cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    Enemy::takeDamage(damage);
}
