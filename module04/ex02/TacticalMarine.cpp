//
// Created by Djevayo Pattij on 6/2/20.
//

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine()
{
    std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh..." << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const& other)
{
    (void)other;
    // trivial
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const& other)
{
    if (this == &other)
        return *this;
    (void)other;
    // trivial
    return *this;
}

ISpaceMarine* TacticalMarine::clone() const
{
    return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}
