//
// Created by Evelyn Veiled on 5/23/22.
//

#include "../headers/AAnimal.h"

Animal::Animal(void) : _type("Undefined")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
    std::cout << "Animal constructor with parameter called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
    if (this != &animal)
    {
        _type = animal.getType();
    }
    return (*this);
}

void	Animal::makeSound(void) const
{
    std::cout << "*typical animal sound*" << std::endl;
}

std::string		Animal::getType(void) const
{
    return (this->_type);
}
