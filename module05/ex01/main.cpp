//
// Created by boat on 6/3/20.
//

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat bob("bob", 1);
        Form form("something", 10, 20);

        form.beSigned(bob);
        bob.signForm(form);
        std::cout << "Block finished" << std::endl;
    } catch (std::exception& e) {
        std::cout << "Block catched" << e.what() << std::endl;
    }
    try {
        Bureaucrat bob("bob", 10);
        Form form("something", 10, 20);

        bob.signForm(form);
        form.beSigned(bob);
        std::cout << "Block finished" << std::endl;
    } catch (std::exception& e) {
        std::cout << "Block catched " << e.what() << std::endl;
    }
    try {
        Bureaucrat bob("bob", 11);
        Form form("something", 10, 20);

        form.beSigned(bob);
        bob.signForm(form);
        std::cout << "Block finished" << std::endl;
    } catch (std::exception& e) {
        std::cout << "Block catched " << e.what() << std::endl;
    }
}
