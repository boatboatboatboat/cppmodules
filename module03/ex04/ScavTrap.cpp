//
// Created by Djevayo Pattij on 3/11/20.
//

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string const& name)
    : ClapTrap("SC4V-TP", name)
{
    _energy = 50;
    _max_energy = 50;
    _melee_attack_damage = 20;
    _ranged_attack_damage = 15;
    _armor_damage_reduction = 3;
    std::cout << "scavtrap ctor" << std::endl;
}

int getRandomNumber(void)
{
    return 4; // chosen by dice roll.
    // guaranteed to be random.
}

void ScavTrap::challengeNewcomer()
{
    static const std::string FUNNY_CHALLENGES[5] = {
        "funny challenge one",
        "funny challenge two",
        "funny challenge three",
        "funny challenge four",
        "funny challenge five",
    };

    if (_energy < 25) {
        std::cout << "nice energy points bro" << std::endl;
        return;
    }
    _energy -= 25;

    srand(getRandomNumber());
    int id = rand() % 5;
    std::cout
        << _classname
        << " "
        << _name
        << " chose the challenge: \""
        << FUNNY_CHALLENGES[id]
        << "\""
        << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scavtrap dtor" << std::endl;
}
