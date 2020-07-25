//
// Created by Djevayo Pattij on 3/10/20.
//

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde {
public:
    ZombieHorde(int N);
    ~ZombieHorde();
    void announce();

private:
    Zombie* _zombies;
    int _N;
};

#endif //ZOMBIEHORDE_HPP
