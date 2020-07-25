//
// Created by Djevayo Pattij on 3/10/20.
//

#include "Brain.hpp"
#include <sstream>

std::string Brain::identify() const
{
    std::stringstream sstream;

    sstream << static_cast<const void*>(this);
    return sstream.str();
}
