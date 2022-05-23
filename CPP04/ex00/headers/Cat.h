//
// Created by Evelyn Veiled on 5/23/22.
//

#ifndef CPP04_CAT_H
#define CPP04_CAT_H

#include "Animal.h"

class Cat : public Animal
{
public:
    Cat(void);
    Cat(const Cat &cat);
    ~Cat();

    Cat	&operator=(const Cat &cat);

    void	makeSound(void) const;
};


#endif //CPP04_CAT_H
