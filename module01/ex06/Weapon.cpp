//
// Created by Djevayo Pattij on 3/10/20.
//

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon()
{
    type = NULL;
    _refcount = NULL;
}

Weapon::Weapon(const std::string& type_str)
{
    _refcount = new int;
    *_refcount = 1;
    type = new std::string;
    type->append(type_str);
}

void Weapon::setType(const std::string& type_str)
{
    type->clear();
    type->append(type_str);
}

const std::string& Weapon::getType()
{
    return *type;
}

Weapon::~Weapon()
{
    if (_refcount != NULL) {
        if (*_refcount == 0) {
            delete _refcount;
            delete type;
        } else
            *_refcount -= 1;
    }
}
