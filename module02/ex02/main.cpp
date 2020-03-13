//
// Created by Djevayo Pattij on 3/11/20.
//

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << (Fixed(12) / Fixed(3)) << std::endl;
    std::cout << (Fixed(12) * Fixed(3)) << std::endl;
    std::cout << Fixed(4) + Fixed(2) << std::endl;
    std::cout << Fixed(4) - Fixed(2) << std::endl;
    std::cout << Fixed(2.5f) + Fixed(2.5f) << std::endl;
    std::cout << (Fixed(4) > Fixed(2)) << std::endl;
    std::cout << (Fixed(4) < Fixed(2)) << std::endl;
    std::cout << (Fixed(2) < Fixed(2)) << std::endl;
    std::cout << (Fixed(2) > Fixed(2)) << std::endl;
    std::cout << (Fixed(2) >= Fixed(2)) << std::endl;
    std::cout << (Fixed(2) <= Fixed(2)) << std::endl;
    std::cout << (Fixed(2) == Fixed(2)) << std::endl;
    std::cout << (Fixed(2) != Fixed(2)) << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
    return 0;
}
