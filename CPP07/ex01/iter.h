//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP07_ITER_H
#define CPP07_ITER_H

# include <iostream>

template<typename T> void	iter(const T *array, int size, void function(const T &))
{
    for (int i = 0; i < size; i++)
        function(array[i]);
}

template<typename T> void	printData(const T &data)
{
    std::cout << data << " ";
}

#endif //CPP07_ITER_H
