//
// Created by boat on 6/3/20.
//

#include "Form.hpp"
#include <iostream>

Form::Form(const std::string &name, int sign_grade, int exec_grade, const std::string& target):
    name(name), sign_grade(sign_grade), exec_grade(exec_grade), target(target)
{
    this->is_signed = false;
    if (this->exec_grade < 1 || this->sign_grade < 1)
        throw Form::GradeTooHighException("Grade too high");
    if (this->exec_grade > 150 || this->exec_grade < 1)
        throw Form::GradeTooLowException("Grade too low");
}

Form::~Form() {}

std::string const &Form::getName() const {
    return this->name;
}

int Form::getExecGrade() const {
    return this->exec_grade;
}

int Form::getSignGrade() const {
    return this->sign_grade;
}

void Form::beSigned(const Bureaucrat &bc) {
    if (this->is_signed)
        throw AlreadySignedException("Form already signed");
    if (bc.getGrade() > this->sign_grade)
        throw GradeTooLowException("Grade too low");
    this->is_signed = true;
}

bool Form::isSigned() const {
    return this->is_signed;
}

void Form::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->exec_grade)
        throw GradeTooLowException("Grade too low");
    if (!this->is_signed)
        throw UnsignedException("Form is unsigned");
}

std::string const &Form::getTarget() const {
    return this->target;
}

Form::GradeTooHighException::GradeTooHighException(const char *what):
    std::runtime_error(what) {}

Form::GradeTooLowException::GradeTooLowException(const char *what):
    std::runtime_error(what) {}

std::ostream &operator<<(std::ostream &os, Form &rhs) {
    os  << "Form { name: \""
        << rhs.getName()
        << ", signed: "
        << rhs.isSigned()
        << ", sign_grade: "
        << rhs.getSignGrade()
        << ", exec_grade: "
        << rhs.getExecGrade()
        << " }" << std::endl;
    return os;
}


Form::AlreadySignedException::AlreadySignedException(const char *what):
    std::runtime_error(what) {}

Form::UnsignedException::UnsignedException(const char *what):
    std::runtime_error(what) {}
