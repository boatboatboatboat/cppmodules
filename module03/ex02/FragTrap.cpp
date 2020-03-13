//
// Created by Djevayo Pattij on 3/11/20.
//

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string const& name)
    : ClapTrap("FR4G-TP", name)
{
    std::cout << "fragtrap ctor" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "fragtrap dtor" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const& target)
{
    static const std::string FUNNY_ATTACKS[5] = {
        "slap target around with a large trout",
        "slap target around with a larger trout",
        "slap target around with a even larger trout",
        "slap target around with a humongous trout",
        "slap target around with a salmon"
    };

    if (_energy < 25) {
        std::cout << "nice energy points bro" << std::endl;
        return;
    }
    _energy -= 25;

    int id = rand() % 5;
    std::cout
        << _classname
        << " "
        << _name
        << " used the attack: \""
        << FUNNY_ATTACKS[id]
        << "\" on "
        << target
        << " dealing "
        << id * 4
        << " damage!"
        << std::endl;
}
