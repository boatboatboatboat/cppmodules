//
// Created by boat on 6/3/20.
//

#ifndef CPPMODULES_FORM_HPP
#define CPPMODULES_FORM_HPP


#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
private:
    // OCF
    Form();
    Form(Form const& other);
    Form& operator=(Form const& other);
    // Fields
    bool is_signed;
    const std::string name;
    const int sign_grade;
    const int exec_grade;
protected:

public:
    Form(std::string const& name, int sign_grade, int exec_grade);
    ~Form();

    std::string const& getName() const;
    int getExecGrade() const;
    int getSignGrade() const;
    bool isSigned() const;

    void beSigned(Bureaucrat const& bc);

    class GradeTooHighException: public std::runtime_error {
    public:
        explicit GradeTooHighException(const char* what);
    };

    class GradeTooLowException: public std::runtime_error {
    public:
        explicit GradeTooLowException(const char* what);
    };

    class AlreadySignedException: public std::runtime_error {
    public:
        explicit AlreadySignedException(const char* what);
    };
};

std::ostream& operator<<(std::ostream& os, Form& rhs);

#endif //CPPMODULES_FORM_HPP
