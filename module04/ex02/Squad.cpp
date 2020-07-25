//
// Created by Djevayo Pattij on 6/2/20.
//

#include "Squad.hpp"
#include <cstring>
#include <iostream>

int Squad::getCount() const
{
    return this->count;
}

ISpaceMarine* Squad::getUnit(int n) const
{
    if (n >= this->count) {
        return NULL;
    }

    return this->marines[n];
}

int Squad::push(ISpaceMarine* item)
{
    if (item == NULL)
        return this->count;

    for (int i = 0; i < this->count; i += 1) {
        if (item == this->marines[i]) {
            return this->count;
        }
    }

    if (this->count >= this->capacity) {
        ISpaceMarine** new_marines = new ISpaceMarine*[this->capacity];

        memcpy(new_marines, this->marines, this->count * sizeof(ISpaceMarine*));
        delete[] this->marines;
        this->marines = new_marines;
    }

    this->marines[this->count] = item;

    this->count += 1;
    return this->count;
}

Squad::Squad()
{
    this->count = 0;
    this->capacity = 8;
    this->marines = new ISpaceMarine*[8];
}

Squad::~Squad()
{
    for (int i = 0; i < this->count; i += 1) {
        delete this->marines[i];
    }
    delete[] this->marines;
}

Squad::Squad(Squad const& other)
{
    this->count = other.count;
    this->capacity = other.capacity;

    this->marines = new ISpaceMarine*[this->capacity];
    for (int i = 0; i < this->count; i += 1) {
        this->marines[i] = other.marines[i]->clone();
    }
}

Squad& Squad::operator=(Squad const& other)
{
    if (this == &other)
        return *this;

    for (int i = 0; i < this->count; i += 1) {
        delete this->marines[i];
    }
    delete[] this->marines;

    this->count = other.count;
    this->capacity = other.capacity;

    this->marines = new ISpaceMarine*[this->capacity];
    for (int i = 0; i < this->count; i += 1) {
        this->marines[i] = other.marines[i]->clone();
    }

    return *this;
}
