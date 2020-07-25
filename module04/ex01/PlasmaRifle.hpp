//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
    PlasmaRifle();
    void attack() const;
};

#endif //PLASMARIFLE_HPP
