//
// Created by Djevayo Pattij on 3/13/20.
//

#include "Enemy.hpp"

Enemy::Enemy(int hp, const std::string &type)
{
	_hp = hp;
	_type = type;
}

Enemy::Enemy(const Enemy &other)
{
	_hp = other._hp;
	_type = other._type;
}

Enemy Enemy::operator=(const Enemy &rhs)
{
	_hp = rhs._hp;
	_type = rhs._type;

	return *this;
}

Enemy::~Enemy()
{
	//=default
}

std::string const &Enemy::getType() const
{
	return _type;
}

int Enemy::getHP() const
{
	return _hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	else if (_hp <= damage)
		_hp = 0;
	else
		_hp -= damage;
}
