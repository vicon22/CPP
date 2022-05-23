//
// Created by Evelyn Veiled on 5/23/22.
//

#ifndef CPP04_DOG_H
#define CPP04_DOG_H

#include "Animal.h"

class Dog : public Animal
{
public:
    Dog(void);
    Dog(const Dog &dog);
    ~Dog();

    Dog	&operator=(const Dog &dog);

    void	makeSound(void) const;
};



#endif //CPP04_DOG_H
