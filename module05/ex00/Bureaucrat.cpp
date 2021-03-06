//
// Created by boat on 6/3/20.
//

#include "Bureaucrat.hpp"

#include <iostream>

Bureaucrat::Bureaucrat(const std::string &name, int grade)
{
    this->name = name;
    this->grade = grade;
    if (grade < 1)
        throw GradeTooHighException("Grade too high");
    if (grade > 150)
        throw GradeTooLowException("Grade too low");
}

Bureaucrat::~Bureaucrat() {}

std::string const &Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void Bureaucrat::increaseGrade() {
    if (grade == 1)
        throw GradeTooHighException("Grade too high");
    grade -= 1;
}

void Bureaucrat::decreaseGrade() {
    if (grade == 150)
        throw GradeTooLowException("Grade too low");
    grade += 1;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const char *what):
    std::runtime_error(what) {}

Bureaucrat::GradeTooLowException::GradeTooLowException(const char *what):
    std::runtime_error(what) {}

std::ostream& operator<<(std::ostream& os, Bureaucrat& rhs) {
    os << rhs.getName()
            << ", bureaucrat grade "
            << rhs.getGrade()
            << ".";
    return os;
}
