//
// Created by Djevayo Pattij on 3/11/20.
//

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const& name)
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
	std::cout
		 << "FR4G-TP "
		 << _name
		 << ": (war cry)"
		 << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout
		<< "FR4G-TP "
		<< _name
		<< ": MY EYE! AHHHHHH!"
		<< std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout
		<< "FR4G-TP "
		<< _name
		<< " attacks "
		<< target
		<< " at range, causing "
		<< _ranged_attack_damage
		<< " points of damage!"
		<< std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout
		<< "FR4G-TP "
		<< _name
		<< " attacks "
		<< target
		<< " in melee combat, causing "
		<< _melee_attack_damage
		<< " points of damage!"
		<< std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	unsigned int adjusted_amount = amount - _armor_damage_reduction;

	if (adjusted_amount > amount)
		adjusted_amount = 0;
	_health = _health < adjusted_amount ? 0 : _health - adjusted_amount;
	std::cout
		<< "FR4G-TP "
		<< _name
		<< " took damage for "
		<< adjusted_amount
		<< " points!"
		<< std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	_health += amount;
	_health = _health > _max_health ? _max_health : _health;
	std::cout
		<< "FR4G-TP "
		<< _name
		<< " was repaired for "
		<< amount
		<< " points!"
		<< std::endl;
}

int getRandomNumber(void) {
	return 4;	// chosen by dice roll.
				// guaranteed to be random.
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	static const std::string FUNNY_ATTACKS[5] = {
			"slap target around with a large trout",
			"slap target around with a larger trout",
			"slap target around with a even larger trout",
			"slap target around with a humongous trout",
			"slap target around with a salmon"
	};

	if (_energy < 25)
	{
		std::cout << "nice energy points bro" << std::endl;
		return;
	}
	_energy -= 25;

	srand(getRandomNumber());
	int id = rand() % 5;
	std::cout
			<< "FR4G-TP "
			<< _name
			<< " used the attack: \""
			<< FUNNY_ATTACKS[id]
			<< "\" on "
			<< target
			<< " dealing "
			<< id * 4
			<< " damage!"
			<< std::endl;
}
