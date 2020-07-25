//
// Created by boat on 6/3/20.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
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

void Bureaucrat::signForm(Form &form) const {
    try {
        form.beSigned(*this);
        std::cout << this->getName() << " signs " << form.getName()
            << std::endl;
    } catch (std::exception& e) {
        std::cout << this->getName() << " cannot sign " << form.getName()
            << " because " << e.what() << "." << std::endl;
    }
}

void Bureaucrat::executeForm(const Form &form) {
    try {
        form.execute(*this);
        std::cout << this->getName() << " executes " << form.getName()
                  << std::endl;
    } catch (std::exception& e) {
        std::cout << this->getName() << " cannot execute " << form.getName()
                  << " because " << e.what() << "." << std::endl;
    }
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
