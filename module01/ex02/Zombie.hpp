//
// Created by Djevayo Pattij on 1/12/20.
//

#ifndef CPPMODULES_ZOMBIE_HPP
#define CPPMODULES_ZOMBIE_HPP

#include <string>

class Zombie {
public:
    void set_name(std::string& name);
    void set_type(int value);
    void announce();

private:
    std::string _name;
    int _inner_type;
};

#endif //CPPMODULES_ZOMBIE_HPP
