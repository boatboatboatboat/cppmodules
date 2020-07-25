//
// Created by boat on 6/3/20.
//

#include <iostream>
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

typedef Form*(*ConcreteFormCtor)(const std::string& target);

Form* make_shrub_ptr(const std::string& target)
{
    return new ShrubberyCreationForm(target);
}

Form* make_pardon_ptr(const std::string& target)
{
    return new PresidentialPardonForm(target);
}

Form* make_robo_ptr(const std::string& target)
{
    return new RobotomyRequestForm(target);
}

Form* Intern::makeForm(const std::string &name, const std::string &target) {
    const std::string forms[3] = {
            "robotomy request",
            "presidential pardon",
            "shrubbery creation"
    };

    const ConcreteFormCtor ctors[3] = {
            &make_shrub_ptr,
            &make_pardon_ptr,
            &make_robo_ptr
    };

    for (int i = 0; i < 3; i += 1) {
        if (forms[i] == name)
        {
            Form* x = ctors[i](target);
            std::cout << "Intern creates " << x->getName() << std::endl;
            return x;
        }
    }

    std::cout << "oh no the form isn't known" << std::endl;
    return NULL;
}
