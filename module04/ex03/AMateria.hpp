//
// Created by Djevayo Pattij on 6/2/20.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class ICharacter;
class AMateria {
private:
    unsigned int _xp;

protected:
    std::string _type;

public:
    AMateria(std::string const& type);
    AMateria();
    AMateria(AMateria const& other);
    AMateria& operator=(AMateria const& other);
    virtual ~AMateria();

    std::string const& getType() const;
    unsigned int getXP() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif //AMATERIA_HPP
