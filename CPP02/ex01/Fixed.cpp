//
// Created by Evelyn Veiled on 5/19/22.
//

#include "Fixed.h"
#include <cmath>

Fixed::Fixed() : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->_raw = other.getRawBits();
//    *this = other;
}

Fixed::Fixed(const int n) {
    std::cout << "Int constructor called" << std::endl;
    _raw = n * (1 << _brBits);
//    std::cout << _raw << std::endl;
//    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fl) {
    std::cout << "Float constructor called" << std::endl;
    _raw = roundf(fl * (1 << _brBits));
//    std::cout << _raw << std::endl;
//    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &fixed)
    {
        return *this;
    }
    this->_raw = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {

    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBits(const int raw) {

    std::cout << "setRawBits member function called" << std::endl;
    _raw = raw;
}

float Fixed::toFloat() const {
    float var;
    var = float(_raw) / float(1 << _brBits);
    return var;
}

int Fixed::toInt() const {
    int var;
    var = roundf(_raw / (1 << _brBits));
    return var;
}

std::ostream & operator<<( std::ostream & ostream, Fixed const & fixed)
{
    ostream << fixed.toFloat();
    return ostream;
}
