
#include "whatever.h"
#include <iostream>

int main(void)
{
    {
        int a = 2;
        int b = 3;

        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

        std::string c = "chaine1";
        std::string d = "chaine2";

        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    std::cout << "--------- " << std::endl;
    {
        int a = 1;
        int b = -2;

        std::cout << "a: " << a << ", b: " << b << std::endl;
        ::swap<int>(a, b);
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
    std::cout << "--------- " << std::endl;
    {
        float a = 1.1;
        float b = -2.2;

        std::cout << "a: " << a << ", b: " << b << std::endl;
        ::swap<float>(a, b);
        std::cout << "a: " << a << ", b: " << b << std::endl;
    }
    std::cout << "--------- " << std::endl;
    {
        int const a = 1;
        int b = -2;

        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "min: " << ::min<int>(a, b) << std::endl;
        std::cout << "min: " << ::min<int>(b, a) << std::endl;
    }
    std::cout << "--------- " << std::endl;
    {
        float const a = 1.1;
        float const b = -2.2;

        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "min: " << ::min<float>(a, b) << std::endl;
        std::cout << "min: " << ::min<float>(b, a) << std::endl;
    }
    std::cout << "--------- " << std::endl;
    {
        int a = 1;
        int b = -2;

        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "max: " << ::max<int>(a, b) << std::endl;
        std::cout << "max: " << ::max<int>(b, a) << std::endl;
    }
    std::cout << "--------- " << std::endl;
    {
        float a = 1.1;
        float b = -2.2;

        std::cout << "a: " << a << ", b: " << b << std::endl;
        std::cout << "max: " << ::max<float>(a, b) << std::endl;
        std::cout << "max: " << ::max<float>(b, a) << std::endl;
    }
    return (0);
}