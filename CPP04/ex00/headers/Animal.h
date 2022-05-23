//
// Created by Evelyn Veiled on 5/23/22.
//

#ifndef CPP04_ANIMAL_H
#define CPP04_ANIMAL_H

# include <iostream>

class Animal
{
protected:
    std::string	_type;

public:
    Animal(void);
    Animal(const std::string &type);
    Animal(const Animal &animal);
    virtual ~Animal();

    Animal	&operator=(const Animal &animal);

    std::string		getType(void) const;
    virtual void	makeSound(void) const;
};

#endif //CPP04_ANIMAL_H
