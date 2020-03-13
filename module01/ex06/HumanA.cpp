//
// Created by Djevayo Pattij on 3/10/20.
//

#include "HumanA.hpp"
#include <iostream>

Weapon a_default_weapon;

void HumanA::attack()
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string& name, Weapon& weapon)
    : _weapon(a_default_weapon)
{
    _name = name;
    _weapon = weapon;
    *(_weapon._refcount) += 1; // 300 iq
}
