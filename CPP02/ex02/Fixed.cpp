//
// Created by Evelyn Veiled on 5/19/22.
//

#include "Fixed.h"
#include <cmath>

Fixed::Fixed() : _raw(0)
{
//    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
//    std::cout << "Copy constructor called" << std::endl;
    this->_raw = other.getRawBits();
//    *this = other;
}

Fixed::Fixed(const int n) {
//    std::cout << "Int constructor called" << std::endl;
    _raw = n * (1 << _brBits);
}

Fixed::Fixed(const float fl) {
//    std::cout << "Float constructor called" << std::endl;
    _raw = roundf(fl * (1 << _brBits));
}

Fixed::~Fixed() {
//    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
//    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &fixed)
    {
        return *this;
    }
    this->_raw = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits() const {

//    std::cout << "getRawBits member function called" << std::endl;
    return _raw;
}

void Fixed::setRawBits(const int raw) {

//    std::cout << "setRawBits member function called" << std::endl;
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

Fixed Fixed::operator*(const Fixed &o) const {
//    std::cout << "---" << std::endl;
//    std::cout << this->toFloat() << std::endl;
//    std::cout << "---" << std::endl;
    return this->toFloat() * o.toFloat();
}

Fixed Fixed::operator/(const Fixed &o) const {
    return this->toFloat() / o.toFloat();
}

Fixed Fixed::operator+(const Fixed &o) const {
    return this->toFloat() + o.toFloat();
}

Fixed Fixed::operator-(const Fixed &o) const {
    return this->toFloat() - o.toFloat();
}

Fixed Fixed::max(const Fixed &obj1, const Fixed &obj2) {
    if (obj1.toFloat() > obj2.toFloat()) {
        return obj1;
    } else {
        return obj2;
    }
}
Fixed Fixed::min(const Fixed &obj1, const Fixed &obj2) {
    if (obj1.toFloat() < obj2.toFloat()) {
        return obj1;
    } else {
        return obj2;
    }
}



bool Fixed::operator!=(const Fixed &o) const {
    return this->toFloat() != o.toFloat();
}

bool Fixed::operator==(const Fixed &o) const {
    return this->toFloat() != o.toFloat();
}

bool Fixed::operator<(const Fixed &o) const {
    return this->toFloat() < o.toFloat();
}

bool Fixed::operator>(const Fixed &o) const {
    return this->toFloat() > o.toFloat();
}

bool Fixed::operator<=(const Fixed &o) const {
    return this->toFloat() <= o.toFloat();
}

bool Fixed::operator>=(const Fixed &o) const {
    return this->toFloat() >= o.toFloat();
}


Fixed Fixed::operator++() {
    *this = Fixed(this->toFloat() + Fixed(1).toFloat() / Fixed(1)._raw);
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed obj(*this);
    *this = Fixed(this->toFloat() + Fixed(1).toFloat() / Fixed(1)._raw);
    return (obj);
}

Fixed Fixed::operator--() {
    *this = Fixed(this->toFloat() - Fixed(1).toFloat() / Fixed(1)._raw);
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed obj(*this);
    *this = Fixed(this->toFloat() - Fixed(1).toFloat() / Fixed(1)._raw);
    return (obj);

}
