//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>

class Fixed {
public:
    Fixed();
    explicit Fixed(int number);
    explicit Fixed(float number);
    ~Fixed();
    Fixed(const Fixed& rhs);
    Fixed& operator=(const Fixed& rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

private:
    int _value;
    static const int FRACTIONAL_BITS = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed& self);

#endif //FIXED_HPP
