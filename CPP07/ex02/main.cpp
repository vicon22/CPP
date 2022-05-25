
#include <cstdlib>
#include <iostream>

#include "Array.h"

int main() {

    Array<int> c(15);
    int i = 0;

    while (i != -1) // exeption try catch
    {
        try
        {
            c[i] = rand();
            i++;
        }
        catch (std::exception & e)
        {
            std::cout << "index: "<< i << " " << e.what() << std::endl;
            i = -1;
        }
    }
    std::cout << "Array<int> a :" << std::endl;
    i = 0;
    while ((uint) i< c.size())
    {

        try {
            std::cout << c[i] << std::endl;
            i++;
        }
        catch (std::exception & e)
        {
            std::cout << e.what() << std::endl;
            i = -1;
        }
    }



    Array<int> b(c); // construction by copy

    std::cout << "b copy of Array<int> a :" << std::endl;
    i = 0;
    while ((uint)i < b.size())
    {
        std::cout << b[i++] << std::endl;
    }

    b = c; // check leaks;


    Array<std::string> lst_a; // 0

    Array<std::string> lst_b(2);

    lst_b[0] = "abcdef";		//operator[] assignation
    lst_b[1] = "message to a";

    lst_a = lst_b;
    std::cout << "Size of lst_a : "<< lst_a.size() << std::endl;

    i = 0;
    lst_b[0] = "B with modif";
    while ((uint)i < lst_a.size())
    {
        std::cout << "lst_a[" << i << "] "<< lst_a[i] << std::endl;
        std::cout << "lst_b[" << i << "] "<< lst_b[i] << std::endl;

        i++;
    }
    return 0;
}