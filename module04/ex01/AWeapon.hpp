//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef AWEAPON_HPP
#define AWEAPON_HPP


#include <string>

class AWeapon
{
private:
protected:
	int _ap_cost;
	int _damage;
	std::string _name;
public:
	AWeapon(std::string const& name, int apcost, int damage);
	~AWeapon();
	std::string const& getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};


#endif //AWEAPON_HPP
