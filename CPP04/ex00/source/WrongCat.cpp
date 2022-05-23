//
// Created by Evelyn Veiled on 5/23/22.
//

#include "../headers/WrongCat.h"

WrongCat::WrongCat(void) : WrongAnimal("Undefined WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &wrongCat)
{
    if (this != &wrongCat)
    {
        this->_type = wrongCat.getType();
    }
    return (*this);
}

void	WrongCat::makeSound(void) const
{
    std::cout << "*WrongMeow*" << std::endl;
}