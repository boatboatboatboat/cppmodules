//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
    PowerFist();
    void attack() const;
};

#endif //POWERFIST_HPP
