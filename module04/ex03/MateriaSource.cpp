//
// Created by Djevayo Pattij on 6/2/20.
//

#include "MateriaSource.hpp"

AMateria* MateriaSource::createMateria(const std::string& type)
{
    for (unsigned int i = 0; i < _count; i += 1) {
        if (_sources[i]->getType() == type)
            return _sources[i]->clone();
    }
    return NULL;
}

void MateriaSource::learnMateria(AMateria* mat)
{
    if (_count >= 4 || mat == NULL)
        return;

    _sources[_count] = mat->clone();
    _count += 1;
}

MateriaSource::~MateriaSource()
{
    for (unsigned int i = 0; i < _count; i += 1) {
        delete _sources[i];
    }
}

MateriaSource::MateriaSource()
{
    _count = 0;
    _sources[0] = NULL;
    _sources[1] = NULL;
    _sources[2] = NULL;
    _sources[3] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const& other)
{
    _count = other._count;
    _sources[0] = NULL;
    _sources[1] = NULL;
    _sources[2] = NULL;
    _sources[3] = NULL;

    for (unsigned int i = 0; i < other._count; i += 1) {
        _sources[i] = other._sources[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
    if (this == &other)
        return *this;

    for (unsigned int i = 0; i < _count; i += 1) {
        delete _sources[i];
    }

    _count = other._count;
    _sources[0] = NULL;
    _sources[1] = NULL;
    _sources[2] = NULL;
    _sources[3] = NULL;

    for (unsigned int i = 0; i < other._count; i += 1) {
        _sources[i] = other._sources[i]->clone();
    }

    return *this;
}
