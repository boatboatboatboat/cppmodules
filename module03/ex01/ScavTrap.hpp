//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "BaseTrap.hpp"

class ScavTrap : public BaseTrap {
public:
    explicit ScavTrap(std::string const& name);
    void challengeNewcomer();
};

#endif //SCAVTRAP_HPP
