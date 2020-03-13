//
// Created by Djevayo Pattij on 3/10/20.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
public:
    HumanB(const std::string& name);
    void attack();
    void setWeapon(Weapon& weapon);

private:
    Weapon& _weapon;
    std::string _name;
};

#endif //HUMANB_HPP
