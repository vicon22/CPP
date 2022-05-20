//
// Created by Evelyn Veiled on 5/19/22.
//

#include "Fixed.h"

Fixed::Fixed() : _raw(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << std::endl;
    this->_raw = other.getRawBits();
//    *this = other;
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
