//
// Created by boat on 6/3/20.
//

#include <iostream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):
    Form("Presidential Pardon Form", 25, 5, target) {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

