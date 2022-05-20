
#ifndef CPP02_FIXED_H
#define CPP02_FIXED_H

#include <iostream>

class Fixed {
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &other);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed & operator=(const Fixed &fixed);

private:
    int _raw;
    static const int _brBits = 8;




};


#endif //CPP02_FIXED_H
