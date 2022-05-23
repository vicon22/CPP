//
// Created by Evelyn Veiled on 5/23/22.
//

#ifndef CPP04_WRONGCAT_H
#define CPP04_WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat : public WrongAnimal
{
protected:

public:
    WrongCat(void);
    WrongCat(const WrongCat &wrongCat);
    ~WrongCat();

    WrongCat	&operator=(const WrongCat &wrongCat);

    void	makeSound(void) const;
};


#endif //CPP04_WRONGCAT_H
