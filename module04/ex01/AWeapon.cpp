//
// Created by Djevayo Pattij on 3/11/20.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const& name, int apcost, int damage)
{
    _name = name;
    _ap_cost = apcost;
    _damage = damage;
}

AWeapon::~AWeapon() {}

std::string const& AWeapon::getName() const
{
    return (_name);
}

int AWeapon::getAPCost() const
{
    return _ap_cost;
}

int AWeapon::getDamage() const
{
    return _damage;
}

AWeapon::AWeapon()
{
    _name = "default weapon";
    _ap_cost = 0;
    _damage = 0;
}

AWeapon::AWeapon(const AWeapon& other)
{
    _name = other._name;
    _ap_cost = other._ap_cost;
    _damage = other._damage;
}

AWeapon& AWeapon::operator=(const AWeapon& other)
{
    if (this == &other)
        return *this;

    _name = other._name;
    _ap_cost = other._ap_cost;
    _damage = other._damage;

    return *this;
}
