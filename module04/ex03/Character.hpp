//
// Created by Djevayo Pattij on 6/2/20.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
    AMateria* __LIFETIMED_MATERIAS[4];
    std::string _name;
    AMateria* _materias[4];

public:
    Character();
    Character(Character const& other);
    Character(std::string const& name);
    Character& operator=(Character const& other);
    ~Character();
    const std::string& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif //CHARACTER_HPP
