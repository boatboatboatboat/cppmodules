//
// Created by Djevayo Pattij on 1/12/20.
//

#include <cstdlib>
#include <iostream>
#include "ZombieHorde.hpp"

int main()
{
    try {
        ZombieHorde horde(10);

        horde.announce();
        system("leaks moarbrainz");
    } catch (...) {
        std::cout << "nice error" << std::endl;
    }
}
