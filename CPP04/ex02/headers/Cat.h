//
// Created by Evelyn Veiled on 5/23/22.
//

#ifndef CPP04_CAT_H
#define CPP04_CAT_H

#include "AAnimal.h"
#include "Brain.h"

class Cat : public AAnimal
{
private:
    Brain	*_brain;
public:
    Cat(void);
    Cat(const Cat &cat);
    ~Cat();

    Cat	&operator=(const Cat &cat);

    Brain& getBrain() const;

    void	makeSound(void) const;
    void	printIdeas(void) const;
};


#endif //CPP04_CAT_H
