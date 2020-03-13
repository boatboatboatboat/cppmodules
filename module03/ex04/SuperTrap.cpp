//
// Created by Djevayo Pattij on 3/11/20.
//

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const& name)
    : ClapTrap("SuperTrap", name)
    , FragTrap(name)
    , ScavTrap(name)
    , NinjaTrap(name)
{
    _health = 100;
    _max_health = 100;
    _energy = 120;
    _max_energy = 120;
    _melee_attack_damage = 60;
    _ranged_attack_damage = 20;
    _armor_damage_reduction = 5;
}
