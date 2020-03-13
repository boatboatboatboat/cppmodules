//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
public:
    explicit FragTrap(std::string const& name);
    ~FragTrap();
    void vaulthunter_dot_exe(std::string const& target);
};

#endif //FRAGTRAP_HPP
