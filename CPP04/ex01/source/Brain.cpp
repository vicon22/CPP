//
// Created by Evelyn Veiled on 5/23/22.
//

#include "../headers/Brain.h"

static std::string	randomString(int size)
{
    const std::string	alphaNum = "abcdefghijklmnopqrstuvwxyz";
    std::string			randomStr = "";

    for (int i = 0; i < size; i++)
        randomStr += alphaNum[std::rand() % alphaNum.size()];
    return (randomStr);
}

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        _ideas[i] = randomString(5);
    }
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        _ideas[i] = randomString(5);
    *this = brain;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &brain)
{
    if (this != &brain)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = brain._ideas[i];
    }
    return (*this);
}

void	Brain::printFirstIdeas(void) const
{
    std::cout << "Ideas " << _ideas[0] << "," << _ideas[1] << "," << _ideas[2] << "," << _ideas[3] << "," << _ideas[4] << ",... ";
}