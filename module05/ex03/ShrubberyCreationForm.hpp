//
// Created by boat on 6/3/20.
//

#ifndef CPPMODULES_SHRUBBERYCREATIONFORM_HPP
#define CPPMODULES_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form {
public:
    explicit ShrubberyCreationForm(std::string const& target);
    virtual void execute(Bureaucrat const& executor) const;

    class FileCreationException: public std::runtime_error {
    public:
        explicit FileCreationException(const char* what);
    };
};

#endif //CPPMODULES_SHRUBBERYCREATIONFORM_HPP
