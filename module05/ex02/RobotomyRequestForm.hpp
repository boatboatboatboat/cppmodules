//
// Created by boat on 6/3/20.
//

#ifndef CPPMODULES_ROBOTOMYREQUESTFORM_HPP
#define CPPMODULES_ROBOTOMYREQUESTFORM_HPP


#include <string>
#include "Bureaucrat.hpp"

class RobotomyRequestForm: public Form {
public:
    explicit RobotomyRequestForm(std::string const& target);
    virtual void execute(Bureaucrat const& executor) const;
};


#endif //CPPMODULES_ROBOTOMYREQUESTFORM_HPP
