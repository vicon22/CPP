//
// Created by Evelyn Veiled on 5/23/22.
//

#ifndef CPP04_WRONGANIMAL_H
#define CPP04_WRONGANIMAL_H

# include <iostream>

class WrongAnimal
{
protected:
    std::string	_type;

public:
    WrongAnimal(void);
    WrongAnimal(const std::string &type);
    WrongAnimal(const WrongAnimal &wrongAnimal);
    virtual ~WrongAnimal();

    WrongAnimal	&operator=(const WrongAnimal &wrongAnimal);

    std::string	getType(void) const;
    void		makeSound(void) const;
};


#endif //CPP04_WRONGANIMAL_H
