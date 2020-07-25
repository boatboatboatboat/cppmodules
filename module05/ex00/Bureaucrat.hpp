//
// Created by boat on 6/3/20.
//

#ifndef CPPMODULES_BUREAUCRAT_HPP
#define CPPMODULES_BUREAUCRAT_HPP

#include <string>
#include <stdexcept>

class Bureaucrat {
private:
    Bureaucrat();
    Bureaucrat(Bureaucrat const& other);
    Bureaucrat& operator=(Bureaucrat const& other);
    int grade;
    std::string name;
public:
    Bureaucrat(std::string const& name, int grade);
    ~Bureaucrat();
    std::string const& getName() const;
    int getGrade() const;
    void increaseGrade();
    void decreaseGrade();

    class GradeTooHighException: public std::runtime_error {
    public:
        explicit GradeTooHighException(const char* what);
    };

    class GradeTooLowException: public std::runtime_error {
    public:
        explicit GradeTooLowException(const char* what);
    };
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& rhs);

#endif //CPPMODULES_BUREAUCRAT_HPP
