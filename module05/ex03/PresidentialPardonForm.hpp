//
// Created by boat on 6/3/20.
//

#ifndef CPPMODULES_PRESIDENTIALPARDONFORM_HPP
#define CPPMODULES_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {
public:
    explicit PresidentialPardonForm(std::string const& target);
    virtual void execute(Bureaucrat const& executor) const;
};

#endif //CPPMODULES_PRESIDENTIALPARDONFORM_HPP
