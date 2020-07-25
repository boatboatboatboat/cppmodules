//
// Created by Djevayo Pattij on 6/2/20.
//

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
    TacticalMarine();
    TacticalMarine(TacticalMarine const& other);
    TacticalMarine& operator=(TacticalMarine const& other);
    ~TacticalMarine();
    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;
};

#endif //TACTICALMARINE_HPP
