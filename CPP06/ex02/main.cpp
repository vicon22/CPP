
//#include <stdint.h>
#include <iostream>

#include "models/Base.h"
#include "models/A.h"
#include "models/B.h"
#include "models/C.h"

Base *generate(void)
{
    Base *ptr;

    int random;
    random = std::rand() % 3;
    switch (random)
    {
        case 0:
            ptr = new A;
            break;
        case 1:
            ptr = new B;
            break;
        default:
            ptr = new C;
            break;
    }

    return ptr;
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
    {
        std::cout << "A" << std::endl;
    }
    if(dynamic_cast<B*>(p))
    {
        std::cout << "B" << std::endl;
    }
    if(dynamic_cast<C*>(p))
    {
        std::cout << "C" << std::endl;
    }
}

void identify(Base& p)
{
    try
    {
        A ob;
        ob = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B ob;
        ob = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C ob;
        ob = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
}

int	main(void)
{
    Base *classes[10];

    std::cout << "--------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        classes[i] = generate();
    }
    std::cout << "--------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        identify(*(classes[i]));
    }
    std::cout << "--------" << std::endl;
    for (int i = 0; i < 10; i++)
    {
        identify((classes[i]));
    }
    std::cout << "--------" << std::endl;


    for (int i = 0; i < 10; i++)
    {
        delete classes[i];
    }

    return (0);
}