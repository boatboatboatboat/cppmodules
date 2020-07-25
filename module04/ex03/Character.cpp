//
// Created by Djevayo Pattij on 6/2/20.
//

#include "Character.hpp"

Character::Character()
{
    _name = "fuck coplien";
}

Character::Character(std::string const& name)
{
    _name = name;
}

std::string const& Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i += 1) {
        if (_materias[i] == NULL) {
            _materias[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 4)
        return;
    _materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 4)
        return;

    AMateria* am = _materias[idx];
    if (am == NULL)
        return;

    am->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4; i += 1) {
        delete __LIFETIMED_MATERIAS[i];
    }
}

Character::Character(Character const& other)
{
    _name = other._name;
    __LIFETIMED_MATERIAS[0] = NULL;
    __LIFETIMED_MATERIAS[1] = NULL;
    __LIFETIMED_MATERIAS[2] = NULL;
    __LIFETIMED_MATERIAS[3] = NULL;

    for (int i = 0; i < 4; i += 1) {
        if (other._materias[i] != NULL) {
            __LIFETIMED_MATERIAS[i] = other._materias[i]->clone();
            _materias[i] = __LIFETIMED_MATERIAS[i];
        }
    }
}

Character& Character::operator=(const Character& other)
{
    if (this == &other)
        return *this;

    for (int i = 0; i < 4; i += 1) {
        delete __LIFETIMED_MATERIAS[i];
    }

    _name = other._name;
    __LIFETIMED_MATERIAS[0] = NULL;
    __LIFETIMED_MATERIAS[1] = NULL;
    __LIFETIMED_MATERIAS[2] = NULL;
    __LIFETIMED_MATERIAS[3] = NULL;

    for (int i = 0; i < 4; i += 1) {
        if (other._materias[i] != NULL) {
            __LIFETIMED_MATERIAS[i] = other._materias[i]->clone();
            _materias[i] = __LIFETIMED_MATERIAS[i];
        }
    }

    return *this;
}
