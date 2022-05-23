//
// Created by Evelyn Veiled on 5/23/22.
//

#include "../headers/Cat.h"

Cat::Cat(void) : Animal("Undefined cat"), _brain(new Brain())
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
    if (this != &cat)
    {
        _type = cat.getType();
        *_brain = cat.getBrain();
    }
    return (*this);
}
void	Cat::makeSound(void) const
{
    std::cout << "*meow*" << std::endl;
}


Brain &Cat::getBrain() const{
    return *_brain;
}

void	Cat::printIdeas(void) const
{
    _brain->printFirstIdeas();
    std::cout << " at " << &_brain << std::endl;
}