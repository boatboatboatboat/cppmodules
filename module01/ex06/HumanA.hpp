//
// Created by Djevayo Pattij on 3/10/20.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA {
public:
    HumanA(const std::string& name, Weapon& weapon);
    void attack();

private:
    Weapon& _weapon;
    std::string _name;
};

#endif //HUMANA_HPP
