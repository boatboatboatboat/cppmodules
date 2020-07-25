//
// Created by Djevayo Pattij on 3/11/20.
//

#include "Fixed.hpp"
#include <iostream>

// default ctor
Fixed::Fixed()
    : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// dtor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// copy ctor
Fixed::Fixed(const Fixed& rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

// assignment overload
Fixed& Fixed::operator=(const Fixed& rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    _value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}
