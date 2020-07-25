//
// Created by Djevayo Pattij on 6/2/20.
//

#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"

class Ice : public AMateria {
public:
    void use(ICharacter& target);
    AMateria* clone() const;
    Ice();
};

#endif //ICE_HPP
