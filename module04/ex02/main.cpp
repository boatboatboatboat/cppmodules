//
// Created by Djevayo Pattij on 6/2/20.
//

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <iostream>

int outer()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    Squad* r_vlc = new Squad;
    ISquad* vlc = r_vlc;
    vlc->push(bob);
    vlc->push(jim);

    std::cout << "---------- Iterating: vlc" << std::endl;
    for (int i = 0; i < vlc->getCount(); ++i) {
        ISpaceMarine* cur = vlc->getUnit(i);
        std::cout << "ptr:idx " << cur << ':' << i << std::endl;
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << "---------- Iterating: vlc_copy" << std::endl;

    ISquad* vlc_copy = new Squad(*r_vlc);
    for (int i = 0; i < vlc_copy->getCount(); ++i) {
        ISpaceMarine* cur = vlc_copy->getUnit(i);
        std::cout << "ptr:idx " << cur << ':' << i << std::endl;
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << "---------- Iterating: assignment_test" << std::endl;
    Squad assignment_test = *r_vlc;
    for (int i = 0; i < assignment_test.getCount(); ++i) {
        ISpaceMarine* cur = assignment_test.getUnit(i);
        std::cout << "ptr:idx " << cur << ':' << i << std::endl;
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << "time to delete VLC" << std::endl;
    delete vlc;
    std::cout << "time to delete COPY OF VLC" << std::endl;
    delete vlc_copy;
    return 0;
}

int main()
{
    int x = outer();
    system("leaks ex02");
    return x;
}
