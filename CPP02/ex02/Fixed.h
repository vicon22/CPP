
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

    bool operator>(Fixed const & o) const;
    bool operator<(Fixed const & o) const;
    bool operator>=(Fixed const & o) const;
    bool operator<=(Fixed const & o) const;
    bool operator==(Fixed const &o) const;
    bool operator!=(Fixed const &o) const;

    Fixed operator+(Fixed const &o) const;
    Fixed operator-(Fixed const &o) const;
    Fixed operator*(Fixed const &o) const;
    Fixed operator/(Fixed const &o) const;

    Fixed operator++( void );
    Fixed operator++( int );
    Fixed operator--( void );
    Fixed operator--( int );

    static Fixed min(Fixed const &obj1, Fixed const &obj2);
    static Fixed max(Fixed const &obj1, Fixed const &obj2);

private:
    int _raw;
    static const int _brBits = 8;
};

std::ostream & operator<<( std::ostream & ostream, Fixed const & fixed);

#endif //CPP02_FIXED_H
