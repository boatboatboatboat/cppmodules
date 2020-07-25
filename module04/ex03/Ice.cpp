//
// Created by Djevayo Pattij on 6/2/20.
//

#include "Ice.hpp"
#include <iostream>

Ice::Ice()
{
    this->_type = "ice";
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    AMateria::use(target);
}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}
