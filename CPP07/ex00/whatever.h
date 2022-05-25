//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP07_WHATEVER_H
#define CPP07_WHATEVER_H

template <typename T> void swap(T& a, T& b)
{
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename T> const T& min(const T& x, const T& y)
{
    if (x < y)
    {
        return x;
    }
    return y;
}

template <typename T> const T& max(const T& x, const T& y)
{
    if (x > y)
    {
        return x;
    }
    return y;
}



#endif //CPP07_WHATEVER_H
