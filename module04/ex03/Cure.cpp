//
// Created by Djevayo Pattij on 6/2/20.
//

#include "Cure.hpp"
#include <iostream>

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout
        << "* heals "
        << target.getName()
        << "'s wounds *"
        << std::endl;

    AMateria::use(target);
}

Cure::Cure()
{
    this->_type = "cure";
}
