//
// Created by Djevayo Pattij on 3/11/20.
//

#include <iostream>
#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap("N1NJ-TP", name)
{
	_health = 60;
	_max_health = 60;
	_energy = 120;
	_max_energy = 120;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;
}

void NinjaTrap::ninjaShoebox(ClapTrap& other)
{
	(void)other;
	std::cout << "tried to interact with regular claptrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap& other)
{
	(void)other;
	std::cout << "tried to interact with another ninjatrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap& other)
{
	(void)other;
	std::cout << "tried to interact with a scavtrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap& other)
{
	(void)other;
	std::cout << "tried to interact with a fragtrap" << std::endl;
}
