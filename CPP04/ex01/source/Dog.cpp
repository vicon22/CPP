//
// Created by Evelyn Veiled on 5/23/22.
//

#include "../headers/Dog.h"

Dog::Dog(void) : Animal("Undefined dog"), _brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain())
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
    if (this != &dog)
    {
        _type = dog.getType();
        *_brain = dog.getBrain();
    }
    return (*this);
}

void	Dog::makeSound(void) const
{
    std::cout << "*woof*" << std::endl;
}

Brain &Dog::getBrain() const
{
    return *_brain;
}

void	Dog::printIdeas(void) const
{
    _brain->printFirstIdeas();
    std::cout << " at " << &_brain << std::endl;
}