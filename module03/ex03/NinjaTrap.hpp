//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class NinjaTrap : public ClapTrap {
public:
    explicit NinjaTrap(std::string const& name);
    void ninjaShoebox(ClapTrap& other);
    void ninjaShoebox(NinjaTrap& other);
    void ninjaShoebox(ScavTrap& other);
    void ninjaShoebox(FragTrap& other);
};

#endif //NINJATRAP_HPP
