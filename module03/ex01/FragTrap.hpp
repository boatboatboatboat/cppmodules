//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "BaseTrap.hpp"
#include <string>

class FragTrap : public BaseTrap {
public:
    explicit FragTrap(std::string const& name);
    void vaulthunter_dot_exe(std::string const& target);
};

#endif //FRAGTRAP_HPP
