//
// Created by Evelyn Veiled on 5/25/22.
//

#include "Span.h"
#include "iostream"

Span::Span( void ) {
    return;
}

Span::Span( uint32_t n ) : _size(n) {
    return;
}

Span::~Span() {
    return;
}

Span::Span( const Span& other ) {
    *this = other;
    return;
}

Span& Span::operator=( const Span& other ) {
    if (this != &other) {
        this->_v = other._v;
        this->_size = other._size;
    }
    return *this;
}

void Span::addNumber( int nbr ) {
    if (_size <= 1) {
        throw std::runtime_error("Not enough elements for span");
    }
    if (_v.size() == _size) {
        throw std::out_of_range("Out of range");
    }
    _v.push_back(nbr);
}

int Span::shortestSpan( void ) const {
    if (_size <= 1) {
        throw std::runtime_error("Not enough elements for span");
    }
    std::vector<int> copy(_v);
    std::sort(copy.begin(), copy.end());
    std::vector<const int>::iterator bgn = copy.begin();
    std::vector<const int>::iterator end = copy.end();
    int span = INT32_MAX;
    int diff;
    while (++bgn != end) {
        diff = *bgn - *(bgn - 1);
        if ( diff < span ) {
            span = diff;
        }
    }
    return span;
}

int Span::longestSpan( void ) const {
    int min = *std::min_element(_v.begin(), _v.end());
    int max = *std::max_element(_v.begin(), _v.end());
    return max - min;
}

void Span::print( void ) const {
    for (uint32_t i = 0; i < _size; ++i) {
        std::cout << _v[i] << " ";
    }
    std::cout << std::endl;
}

void Span::addRange( int bgn, int end ) {
    while (bgn != end) {
        this->addNumber(bgn);
        ++bgn;
    }
}
