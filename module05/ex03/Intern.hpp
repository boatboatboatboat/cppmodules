//
// Created by boat on 6/3/20.
//

#ifndef CPPMODULES_INTERN_HPP
#define CPPMODULES_INTERN_HPP


#include <string>
#include "Form.hpp"

class Intern {
public:
    Form* makeForm(std::string const& name, std::string const& target);
};


#endif //CPPMODULES_INTERN_HPP
