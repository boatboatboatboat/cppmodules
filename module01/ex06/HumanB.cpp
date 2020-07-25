//
// Created by Djevayo Pattij on 3/10/20.
//

#include "HumanB.hpp"
#include <iostream>

Weapon default_weapon;

HumanB::HumanB(const std::string& name)
    : _weapon(default_weapon)
{
    _name = name;
}

void HumanB::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = weapon;
    *(_weapon._refcount) += 1; // 300 iq
}
