//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP08_SPAN_H
#define CPP08_SPAN_H


#include <vector>

class Span {
private:
    Span( void );
    std::vector<int> _v;
    uint32_t _size;
public:
    Span( uint32_t n );
    ~Span();
    Span( const Span& other );
    Span& operator=( const Span& other );

    void addNumber( int nbr );
    int shortestSpan( void ) const;
    int longestSpan( void ) const;
    void print( void ) const;
    void addRange( int bgn, int end );

    template< typename T >
    void addRange( T bgn, T end ) {
        while (bgn != end) {
            this->addNumber(*bgn);
            ++bgn;
        }
    }

    template< typename T, typename G >
    void generate( T bgn, T end, G generator ) {
        while (bgn != end) {
            this->addNumber(generator());
            ++bgn;
        }
    }
};



#endif //CPP08_SPAN_H
