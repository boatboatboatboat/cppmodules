//
// Created by Djevayo Pattij on 3/11/20.
//

#include "Peon.hpp"
#include "Sorcerer.hpp"
#include <iostream>

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");

    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);

    // ez extra test
    Peon bruh("bruh");
    robert.polymorph(bruh);
    return 0;
}
