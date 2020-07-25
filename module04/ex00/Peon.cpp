//
// Created by Djevayo Pattij on 3/11/20.
//

#include "Peon.hpp"
#include <iostream>

using std::cout;
using std::endl;

Peon::Peon(const std::string& name)
    : Victim(name)
{
    cout << "Zog zog." << endl;
}

Peon::~Peon()
{
    cout << "Bleuark..." << endl;
}

void Peon::getPolymorphed() const
{
    cout << get_name() << " has been turned into a pink pony!" << endl;
}
