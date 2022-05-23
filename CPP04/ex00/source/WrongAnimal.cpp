//
// Created by Evelyn Veiled on 5/23/22.
//

#include "../headers/WrongAnimal.h"

WrongAnimal::WrongAnimal(void) : _type("Undefined WrongAnimal")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
    std::cout << "WrongAnimal constructor with parameter called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
    if (this != &wrongAnimal)
    {
        this->_type = wrongAnimal.getType();
    }
    return (*this);
}

std::string	WrongAnimal::getType(void) const
{
    return (_type);
}

void	WrongAnimal::makeSound(void) const
{
    std::cout << "*WrongAnimal sound*" << std::endl;
}