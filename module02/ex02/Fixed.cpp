//
// Created by Djevayo Pattij on 3/11/20.
//

#include "Fixed.hpp"
#include <iostream>
#include <math.h>

// default ctor
Fixed::Fixed()
    : _value(0)
{
    //std::cout << "Default constructor called" << std::endl;
}

// dtor
Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}

// copy ctor
Fixed::Fixed(const Fixed& rhs)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

// assignment overload
Fixed& Fixed::operator=(const Fixed& rhs)
{
    //std::cout << "Assignation operator called" << std::endl;
    _value = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw)
{
    _value = raw;
}

float Fixed::toFloat(void) const
{
    float out;

    out = (float)(_value >> FRACTIONAL_BITS);
    out += (float)(_value & 0xFF) / 256.0f;
    return (out);
}

int Fixed::toInt(void) const
{
    return _value >> FRACTIONAL_BITS;
}

Fixed::Fixed(int number)
{
    _value = number << FRACTIONAL_BITS;
}

Fixed::Fixed(float number)
{
    _value = number;
    _value <<= 8;
    _value += roundf(((number - (float)(long)number) * 256.0f));
}

std::ostream& operator<<(std::ostream& os, const Fixed& self)
{
    os << self.toFloat();
    return os;
}

bool Fixed::operator==(const Fixed& rhs) const
{
    return _value == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const
{
    return _value != rhs.getRawBits();
}

bool Fixed::operator>(const Fixed& rhs) const
{
    return _value > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed& rhs) const
{
    return _value < rhs.getRawBits();
}

bool Fixed::operator>=(const Fixed& rhs) const
{
    return _value >= rhs.getRawBits();
}

bool Fixed::operator<=(const Fixed& rhs) const
{
    return _value <= rhs.getRawBits();
}

Fixed Fixed::operator++(int)
{
    Fixed copy(*this);
    operator++();
    return copy;
}

Fixed& Fixed::operator++()
{
    _value += 1;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed copy(*this);
    operator--();
    return copy;
}

Fixed& Fixed::operator--()
{
    _value -= 1;
    return *this;
}

Fixed Fixed::operator+(const Fixed& rhs) const
{
    Fixed out;

    out.setRawBits(_value + rhs.getRawBits());
    return out;
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    Fixed out;

    out.setRawBits(_value - rhs.getRawBits());
    return out;
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    Fixed out;
    long x, y, z;

    x = _value;
    y = rhs.getRawBits();
    z = x * y;
    z >>= FRACTIONAL_BITS;
    out.setRawBits(z);
    return out;
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
	Fixed out;
	long x, y, z;

	x = _value;
	y = rhs.getRawBits();
	z = x / y;
	z <<= FRACTIONAL_BITS;
	out.setRawBits(z);
	return out;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    return a > b ? b : a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    return a > b ? b : a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    return a > b ? a : b;
}
