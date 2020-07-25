//
// Created by Djevayo Pattij on 3/11/20.
//

#include "Sorcerer.hpp"
#include <iostream>

using std::cout;

Sorcerer::Sorcerer(const std::string& name, const std::string& title)
{
    _name = name;
    _title = title;
    cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    cout << _name << ", " << _title << " is dead. Consequences will never be the same!" << std::endl;
}

const std::string& Sorcerer::get_name() const
{
    return _name;
}

const std::string& Sorcerer::get_title() const
{
    return _title;
}

void Sorcerer::polymorph(Victim const& victim) const
{
    victim.getPolymorphed();
}

// this is stupid
Sorcerer::Sorcerer()
{
    _name = "unnamed";
    _title = "untitled";
    cout << _name << ", " << _title << ", is born!" << std::endl;
}

// this is stupid
Sorcerer::Sorcerer(const Sorcerer& other)
{
    _name = other._name;
    _title = other._title;
    cout << _name << ", " << _title << ", is born!" << std::endl;
}

// this is stupid
Sorcerer& Sorcerer::operator=(const Sorcerer& other)
{
    _name = other._name;
    _title = other._title;

    return *this;
}

std::ostream& operator<<(std::ostream& os, Sorcerer& self)
{
    os << "I am " << self.get_name() << ", " << self.get_title() << ", and I like ponies!" << std::endl;
    return os;
}
