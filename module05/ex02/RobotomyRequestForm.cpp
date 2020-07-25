//
// Created by boat on 6/3/20.
//

#include <iostream>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):
    Form("Robotomy Request Form", 72, 45, target)
    {
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << "* drilling noises *" << std::endl;
    if (rand() % 2 == 0) {
        std::cout   << this->getTarget()
                    << " has been robotomized successfully"
                    << std::endl;
    } else {
        std::cout   << this->getTarget()
                    << " has not been robotomized successfully"
                    << std::endl;
    }
}
