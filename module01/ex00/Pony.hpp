//
// Created by Djevayo Pattij on 1/12/20.
//

#ifndef CPPMODULES_PONY_HPP
#define CPPMODULES_PONY_HPP

class Pony {
public:
    Pony();
    ~Pony();
    void walk();

private:
    int _speed;
    int _moved_total;
};

#endif //CPPMODULES_PONY_HPP
