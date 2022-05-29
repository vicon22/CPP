//
// Created by Evelyn Veiled on 5/29/22.
//

#ifndef CPP08_MUTANTSTACK_H
#define CPP08_MUTANTSTACK_H

#include <stack>

template< typename T >
class MutantStack : public std::stack<T> {
public:
    MutantStack( void ) : std::stack<T>() {}

    MutantStack( const MutantStack& other ) : std::stack<T>(other) {}

    MutantStack& operator=( const MutantStack& other ) {
        if (this != &other) {
            std::stack<T>::operator=(other);
        }
        return *this;
    }

    ~MutantStack() {}

    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

    iterator begin(void) { return std::stack<T>::c.begin(); }
    const_iterator begin(void) const { return std::stack<T>::c.begin(); }
    reverse_iterator rbegin(void) { return std::stack<T>::c.rbegin(); }
    const_reverse_iterator rbegin(void) const { return std::stack<T>::c.rbegin(); }
    iterator end(void) { return std::stack<T>::c.end(); }
    const_iterator end(void) const { return std::stack<T>::c.end(); }
    reverse_iterator rend(void) { return std::stack<T>::c.rend(); }
    const_reverse_iterator rend(void) const { return std::stack<T>::c.rend(); }
};

#endif //CPP08_MUTANTSTACK_H
