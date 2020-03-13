//
// Created by Djevayo Pattij on 1/12/20.
//

#include "UniqueZombie.hpp"
#include "ZombieEvent.hpp"
#include <cstdlib>
#include <iostream>

UniqueZombie::UniqueZombie(Zombie* zombie, int* refs)
{
    _refs = refs;
    _zombie_ref = zombie;
}

UniqueZombie::UniqueZombie(const std::string& name, int type)
{
    ZombieEvent creator;

    _refs = new int;
    *_refs = 1;
    creator.setZombieType(type); // chosen by dice roll
    _zombie_ref = creator.newZombie(name);
}

UniqueZombie::~UniqueZombie()
{
    *_refs -= 1;
    if (*_refs == 0) {
        delete _zombie_ref;
        delete _refs;
    }
}

UniqueZombie UniqueZombie::copy()
{
    *_refs += 1;
    UniqueZombie new_zombie(_zombie_ref, _refs);
    return (new_zombie);
}

Zombie* UniqueZombie::get_zombie()
{
    return (_zombie_ref);
}

void randomChump()
{
    std::string names[2] = {
        "name one",
        "name two"
    };
    int id = rand() % 2;
    UniqueZombie bruh(names[id], id);
    bruh.get_zombie()->announce();
}
