//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
public:
    explicit Peon(const std::string& name);
    ~Peon();
    void getPolymorphed() const;
};

#endif //PEON_HPP
