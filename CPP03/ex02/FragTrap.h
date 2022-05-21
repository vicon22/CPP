//
// Created by Evelyn Veiled on 5/21/22.
//

#ifndef CPP03_FRAGTRAP_H
#define CPP03_FRAGTRAP_H

#include "ClapTrap.h"
#include "iostream"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &instance);
    ~FragTrap();

    FragTrap& operator=(FragTrap const &fragTrap);

    void highFivesGuys(void);

};

std::ostream & operator<<( std::ostream & ostream, FragTrap const &rhs);


#endif //CPP03_FRAGTRAP_H
