//
// Created by Evelyn Veiled on 5/23/22.
//

#ifndef CPP04_ANIMAL_H
#define CPP04_ANIMAL_H

# include <iostream>

class AAnimal
{
protected:
    std::string	_type;

public:
    AAnimal(void);
    AAnimal(const std::string &type);
    AAnimal(const AAnimal &animal);
    virtual ~AAnimal();

    AAnimal	&operator=(const AAnimal &animal);

    std::string		getType(void) const;
    virtual void	makeSound(void) const = 0;
};

#endif //CPP04_ANIMAL_H
