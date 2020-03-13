//
// Created by Djevayo Pattij on 1/12/20.
//

#include "UniqueZombie.hpp"
#include "Zombie.hpp"

int main()
{
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    randomChump();
    std::string stack_zombie_name = "stackman";
    Zombie stack_zombie;

    stack_zombie.set_name(stack_zombie_name);
    stack_zombie.set_type(420);
    stack_zombie.announce();
    system("leaks pluckingsomebrains");
}
