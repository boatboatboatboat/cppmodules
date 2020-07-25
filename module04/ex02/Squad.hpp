//
// Created by Djevayo Pattij on 6/2/20.
//

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad {
public:
    Squad();
    Squad(Squad const& other);
    Squad& operator=(Squad const& other);
    ~Squad();
    int getCount() const;
    ISpaceMarine* getUnit(int n) const; // this is not const
    int push(ISpaceMarine* item);

private:
    int count;
    int capacity;
    ISpaceMarine** marines;
};

#endif //SQUAD_HPP
