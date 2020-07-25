//
// Created by Djevayo Pattij on 3/10/20.
//

#include <cstdlib>
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N)
{
    if (N < 1)
        return;
    // init fields
    _N = N;
    _zombies = new Zombie[N];

    // lazily do a constant as a local lmao
    std::string names[3] = {
        "bruh",
        "esketit",
        "skrt"
    };

    // for each new zombie
    for (int idx = 0; idx < N; idx += 1) {

        // generate a random number 0..=2
        int nbr = rand() % 3;
        _zombies[idx].set_name(names[nbr]);
        _zombies[idx].set_type(idx);
    }
}

ZombieHorde::~ZombieHorde()
{
    if (_N > 0)
        delete[] _zombies;
}

void ZombieHorde::announce()
{
    for (int idx = 0; idx < _N; idx += 1)
        _zombies[idx].announce();
}
