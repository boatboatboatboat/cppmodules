//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"

class SuperTrap : public FragTrap, public ScavTrap, public NinjaTrap {
public:
    explicit SuperTrap(std::string const& name);
};

#endif //SUPERTRAP_HPP
