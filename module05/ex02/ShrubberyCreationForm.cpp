//
// Created by boat on 6/3/20.
//

#include <fstream>
#include <iostream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target):
    Form("Shrubbery Creation Form", 145, 137, target)
{}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);

    std::string filename(this->getTarget());
    filename.append("_shrubbery");

    std::ofstream outfile(filename.c_str());
    if (!outfile)
        throw FileCreationException("failed to open file");

    outfile <<
            #include "treefile"
            << std::endl;
    outfile.close();
}

ShrubberyCreationForm::FileCreationException::FileCreationException(const char *what): std::runtime_error(what) {}


