//
// Created by Djevayo Pattij on 3/11/20.
//

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	_name = name;
	_ap_cost = apcost;
	_damage = damage;
}

AWeapon::~AWeapon() {}

std::string const &AWeapon::getName() const
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
