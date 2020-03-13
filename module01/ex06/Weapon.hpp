//
// Created by Djevayo Pattij on 3/10/20.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
public:
    Weapon();

    explicit Weapon(const std::string& type_str);
    ~Weapon();
    const std::string& getType();
    void setType(const std::string& type_str);
    int* _refcount;

private:
    std::string* type;
};

#endif //WEAPON_HPP
