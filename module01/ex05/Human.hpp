//
// Created by Djevayo Pattij on 3/10/20.
//

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"
#include <string>

class Human {
public:
    std::string identify() const;
    const Brain& getBrain();

private:
    const Brain _brain;
};

#endif //HUMAN_HPP
