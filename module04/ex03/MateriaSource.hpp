//
// Created by Djevayo Pattij on 6/2/20.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
    unsigned int _count;
    AMateria* _sources[4];

public:
    MateriaSource();
    MateriaSource(MateriaSource const& other);
    MateriaSource& operator=(MateriaSource const& other);
    void learnMateria(AMateria* mat);
    AMateria* createMateria(const std::string& type);
    ~MateriaSource();
};

#endif //MATERIASOURCE_HPP
