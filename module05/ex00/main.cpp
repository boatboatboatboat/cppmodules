//
// Created by boat on 6/3/20.
//

#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bob("bob", 10);
    try
    {
        bob.decreaseGrade();
        std::cout << bob << std::endl;
        bob.increaseGrade();
        std::cout << bob << std::endl;
        bob.increaseGrade();
        std::cout << bob << std::endl;

    }
    catch (std::exception& e) {
        std::cout << "an error occured: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bob("bob", 0);
        std::cout << bob << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "an error occured: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bob("bob", 1);
        std::cout << bob << std::endl;
        bob.increaseGrade();
		std::cout << bob << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "an error occured: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bob("bob", 150);
        std::cout << bob << std::endl;
        bob.decreaseGrade();
 std::cout << bob << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "an error occured: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bob("bob", 151);
        std::cout << bob << std::endl;
    }
    catch (std::exception& e) {
        std::cout << "an error occured: " << e.what() << std::endl;
    }
}
