//
// Created by Djevayo Pattij on 6/2/20.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <string>

class Character {
public:
    Character(std::string const& name);
    // this is stupid vvv
    Character();
    Character(const Character& other);
    Character& operator=(const Character& other);
    // this is stupid ^^^
    ~Character();
    void recoverAP();
    void equip(AWeapon* weapon);
    void attack(Enemy* enemy);
    std::string const& getName() const;
    int getAP() const;
    AWeapon* getWeapon();

private:
    std::string name;
    AWeapon* current_weapon;
    int ap;
};

std::ostream& operator<<(std::ostream& os, Character& self);

#endif //CHARACTER_HPP
