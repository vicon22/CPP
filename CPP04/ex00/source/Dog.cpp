//
// Created by Evelyn Veiled on 5/23/22.
//

#include "../headers/Dog.h"

Dog::Dog(void) : Animal("Undefined dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
    if (this != &dog)
    {
        _type = dog.getType();
    }
    return (*this);
}

void	Dog::makeSound(void) const
{
    std::cout << "*woof*" << std::endl;
}
