//
// Created by Djevayo Pattij on 6/2/20.
//

#include "Character.hpp"
#include <iostream>

Character::Character(std::string const& name)
{
    this->name = name;
    this->current_weapon = NULL;
    this->ap = 40;
}

Character::Character()
{
    this->name = "unnamed";
    this->current_weapon = NULL;
    this->ap = 40;
}

Character::Character(const Character& other)
{
    this->name = other.name;
    this->current_weapon = other.current_weapon;
    this->ap = other.ap;
}

AWeapon* Character::getWeapon()
{
    return this->current_weapon;
}

Character& Character::operator=(const Character& other)
{
    if (this == &other)
        return *this;

    this->name = other.name;
    this->current_weapon = other.current_weapon;
    this->ap = other.ap;

    return *this;
}

Character::~Character()
{
    // doesn't do anything
    // ocf is stupid
}

void Character::recoverAP()
{
    this->ap += 10;
    if (this->ap > 40)
        this->ap = 40;
}

void Character::equip(AWeapon* weapon)
{
    this->current_weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
    AWeapon* cw = this->current_weapon;

    if (cw == NULL || enemy == NULL)
        return;

    std::cout
        << this->name
        << " attacks "
        << enemy->getType()
        << " with a "
        << cw->getName()
        << std::endl;
    cw->attack();

    enemy->takeDamage(cw->getDamage());
    if (enemy->getHP() <= 0)
        delete enemy;

    this->ap -= cw->getAPCost();
    if (ap < 0)
        ap = 0;
}

std::string const& Character::getName() const
{
    return this->name;
}

int Character::getAP() const
{
    return this->ap;
}

std::ostream& operator<<(std::ostream& os, Character& self)
{
    os
        << self.getName()
        << " has " << self.getAP() << " AP and ";
    if (self.getWeapon() == NULL) {
        os << "is unarmed";
    } else {
        os << "wields a " << self.getWeapon()->getName();
    }
    os << std::endl;
    return os;
}
