//
// Created by Djevayo Pattij on 3/13/20.
//

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP


#include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant();
	~SuperMutant();
	void takeDamage(int damage);
};


#endif //SUPERMUTANT_HPP
