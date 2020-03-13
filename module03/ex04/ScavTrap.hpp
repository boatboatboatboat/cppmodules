//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
    explicit ScavTrap(std::string const& name);
    ~ScavTrap();
    void challengeNewcomer();
};

#endif //SCAVTRAP_HPP
