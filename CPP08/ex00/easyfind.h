//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP08_EASYFIND_H
#define CPP08_EASYFIND_H

#include <algorithm>

template< typename T >
typename T::iterator easyfind( T & container, int toFind ) {
    typename T::iterator it = std::find(container.begin(), container.end(), toFind);
    return it;
}


#endif //CPP08_EASYFIND_H
