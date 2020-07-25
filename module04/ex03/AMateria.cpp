//
// Created by Djevayo Pattij on 6/2/20.
//

#include "AMateria.hpp"

void AMateria::use(ICharacter& target)
{
    (void)target;
    _xp += 10;
}

std::string const& AMateria::getType() const
{
    return this->_type;
}

unsigned int AMateria::getXP() const
{
    return this->_xp;
}

AMateria::AMateria(std::string const& type)
    : _xp(0)
    , _type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria()
    : _xp(0)
    , _type("default")
{
}

AMateria::AMateria(const AMateria& other)
{
    this->_xp = other._xp;
    this->_type = other._type;
}

AMateria& AMateria::operator=(AMateria const& other)
{
    if (this == &other)
        return *this;

    this->_xp = other._xp;

    return *this;
}
