//
// Created by boat on 6/3/20.
//

#include <exception>
#include <iostream>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    Form* rrf;

    rrf = intern.makeForm("robotomy request", "bender");
    delete rrf;
    rrf = intern.makeForm("presidential pardon", "bob");
    delete rrf;
    rrf = intern.makeForm("shrubbery creation", "bob2");
    delete rrf;
}
