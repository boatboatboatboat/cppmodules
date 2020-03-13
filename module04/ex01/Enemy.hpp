//
// Created by Djevayo Pattij on 3/13/20.
//

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>

class Enemy
{
private:
	std::string _type;
	int _hp;
public:
	Enemy(int hp, std::string const & type);
	Enemy(const Enemy& other);
	Enemy operator=(const Enemy& rhs);
	~Enemy();
	std::string const& getType() const;
	int getHP() const;

	virtual void takeDamage(int);
};


#endif //ENEMY_HPP
