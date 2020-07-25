//
// Created by Djevayo Pattij on 1/12/20.
//

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    _inner_type = 0;
}

void ZombieEvent::setZombieType(int value)
{
    _inner_type = value;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie* out = new (std::nothrow) Zombie;
    if (out == NULL)
        return NULL;
    out->set_type(_inner_type);
    out->set_name(name);
    return out;
}
