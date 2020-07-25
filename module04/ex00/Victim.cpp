//
// Created by Djevayo Pattij on 3/11/20.
//

#include "Victim.hpp"
#include <iostream>

using std::cout;
using std::endl;

Victim::Victim(const std::string& name)
{
    _name = name;
    cout << "Some random victim called " << _name << " just appeared!" << endl;
}

Victim::~Victim()
{
    cout << "Victim " << _name << " just died for no apparent reason!" << endl;
}

void Victim::getPolymorphed() const
{
    cout << _name << " has been turned into a cute little sheep!" << endl;
}

const std::string& Victim::get_name() const
{
    return _name;
}

std::ostream& operator<<(std::ostream& os, Victim& self)
{
    os << "I'm " << self.get_name() << " and I like otters!" << std::endl;
    return os;
}
