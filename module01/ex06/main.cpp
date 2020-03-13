//
// Created by Djevayo Pattij on 3/10/20.
//

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club BOB");

        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club BOB");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club JIM");

        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club JIM");
        jim.attack();
    }
}
