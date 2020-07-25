//
// Created by Djevayo Pattij on 1/12/20.
//

#ifndef CPPMODULES_ZOMBIEEVENT_HPP
#define CPPMODULES_ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <string>

class ZombieEvent {
public:
    void setZombieType(int value);
    Zombie* newZombie(std::string name);
    ZombieEvent();

private:
    int _inner_type;
};

#endif //CPPMODULES_ZOMBIEEVENT_HPP
