//
// Created by Djevayo Pattij on 3/11/20.
//

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& rhs);
    Fixed& operator=(const Fixed& rhs);
    int getRawBits(void) const;
    void setRawBits(int const raw);

private:
    int _value;
    static const int FRACTIONAL_BITS = 8;
};

#endif //FIXED_HPP
