//
// Created by Evelyn Veiled on 5/23/22.
//

#ifndef CPP04_DOG_H
#define CPP04_DOG_H

#include "AAnimal.h"
#include "Brain.h"

class Dog : public AAnimal
{
private:
    Brain	*_brain;
public:
    Dog(void);
    Dog(const Dog &dog);
    ~Dog();

    Dog	&operator=(const Dog &dog);

    Brain& getBrain() const;

    void	makeSound(void) const;
    void	printIdeas(void) const;
};



#endif //CPP04_DOG_H
