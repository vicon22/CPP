//
// Created by Evelyn Veiled on 5/23/22.
//

#include "../headers/Cat.h"

Cat::Cat(void) : Animal("Undefined cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal("Cat")
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
    if (this != &cat)
    {
        _type = cat.getType();
    }
    return (*this);
}
void	Cat::makeSound(void) const
{
    std::cout << "*meow*" << std::endl;
}