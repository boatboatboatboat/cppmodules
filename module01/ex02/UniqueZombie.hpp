//
// Created by Djevayo Pattij on 1/12/20.
//

#ifndef CPPMODULES_UNIQUEZOMBIE_HPP
#define CPPMODULES_UNIQUEZOMBIE_HPP

#include "Zombie.hpp"

class UniqueZombie {
public:
    UniqueZombie(const std::string& name, int type);
    UniqueZombie(Zombie* zombie, int* refs);
    ~UniqueZombie();
    UniqueZombie copy();
    Zombie* get_zombie();

private:
    Zombie* _zombie_ref;
    int* _refs;
};

void randomChump();

#endif //CPPMODULES_UNIQUEZOMBIE_HPP
