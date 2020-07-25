//
// Created by Djevayo Pattij on 3/11/20.
//

#include "BaseTrap.hpp"
#include <iostream>

BaseTrap::BaseTrap(std::string const& classname, std::string const& name)
{
    _health = 100;
    _max_health = 100;
    _energy = 100;
    _max_energy = 100;
    _level = 1;
    _name = name;
    _melee_attack_damage = 30;
    _ranged_attack_damage = 20;
    _armor_damage_reduction = 5;
    _classname = classname;
    std::cout
        << _classname
        << " "
        << _name
        << ": (war cry)"
        << std::endl;
}

BaseTrap::~BaseTrap()
{
    std::cout
        << _classname
        << " "
        << _name
        << ": MY EYE! AHHHHHH!"
        << std::endl;
}

void BaseTrap::rangedAttack(std::string const& target)
{
    std::cout
        << _classname
        << " "
        << _name
        << " attacks "
        << target
        << " at range, causing "
        << _ranged_attack_damage
        << " points of damage!"
        << std::endl;
}

void BaseTrap::meleeAttack(std::string const& target)
{
    std::cout
        << _classname
        << " "
        << _name
        << " attacks "
        << target
        << " in melee combat, causing "
        << _melee_attack_damage
        << " points of damage!"
        << std::endl;
}

void BaseTrap::takeDamage(unsigned int amount)
{
    unsigned int adjusted_amount = amount - _armor_damage_reduction;

    if (adjusted_amount > amount)
        adjusted_amount = 0;
    _health = _health < adjusted_amount ? 0 : _health - adjusted_amount;
    std::cout
        << _classname
        << " "
        << _name
        << " took damage for "
        << adjusted_amount
        << " points!"
        << std::endl;
}

void BaseTrap::beRepaired(unsigned int amount)
{
    _health += amount;
    _health = _health > _max_health ? _max_health : _health;
    std::cout
        << _classname
        << " "
        << _name
        << " was repaired for "
        << amount
        << " points!"
        << std::endl;
}

BaseTrap::BaseTrap()
{
    _health = 100;
    _max_health = 100;
    _energy = 100;
    _max_energy = 100;
    _level = 1;
    _name = "unnamed";
    _melee_attack_damage = 30;
    _ranged_attack_damage = 20;
    _armor_damage_reduction = 5;
    _classname = "no class";
    std::cout
        << _classname
        << " "
        << _name
        << ": (war cry)"
        << std::endl;
}

BaseTrap::BaseTrap(BaseTrap const& other)
{
    _health = other._health;
    _max_health = other._max_health;
    _energy = other._energy;
    _max_energy = other._max_energy;
    _level = other._level;
    _name = other._name;
    _melee_attack_damage = other._melee_attack_damage;
    _ranged_attack_damage = other._ranged_attack_damage;
    _armor_damage_reduction = other._armor_damage_reduction;
    _classname = other._classname;
    std::cout
        << _classname
        << " "
        << _name
        << ": (war cry)"
        << std::endl;
}

BaseTrap& BaseTrap::operator=(BaseTrap const& other)
{
    _health = other._health;
    _max_health = other._max_health;
    _energy = other._energy;
    _max_energy = other._max_energy;
    _level = other._level;
    _name = other._name;
    _melee_attack_damage = other._melee_attack_damage;
    _ranged_attack_damage = other._ranged_attack_damage;
    _armor_damage_reduction = other._armor_damage_reduction;
    _classname = other._classname;
    return *this;
}
