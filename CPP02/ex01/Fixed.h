
#ifndef CPP02_FIXED_H
#define CPP02_FIXED_H

#include <iostream>

class Fixed {
public:
    Fixed();
    ~Fixed();
    Fixed(int const n);
    Fixed(float const fl);
    Fixed(const Fixed &other);

    Fixed & operator=(const Fixed &fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;

private:
    int _raw;
    static const int _brBits = 8;
};

std::ostream & operator<<( std::ostream & ostream, Fixed const & fixed);

#endif //CPP02_FIXED_H
