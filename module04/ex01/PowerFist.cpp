//
// Created by Djevayo Pattij on 3/11/20.
//

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist()
	: AWeapon("Power Fist", 8, 50) {}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
