#include "Human.hpp"
#include <iostream>

int main()
{
    try {
        Human bob;

        std::cout << bob.identify() << std::endl;
        std::cout << bob.getBrain().identify() << std::endl;
    } catch (...) {
        std::cout << "an error occurred" << std::endl;
    }
}
