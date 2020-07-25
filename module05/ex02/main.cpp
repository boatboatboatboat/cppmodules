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

int main()
{
    Bureaucrat bob("bob", 1);
    ShrubberyCreationForm scf("scftarget");
    RobotomyRequestForm rrf("rrftarget");
    srand(4);

    bob.signForm(scf);
    bob.executeForm(scf);
    bob.signForm(rrf);
    bob.executeForm(rrf);
    bob.executeForm(rrf);
}
