//
// Created by Evelyn Veiled on 5/20/22.
//

#ifndef CPP03_SCAVTRAP_H
#define CPP03_SCAVTRAP_H

#include "ClapTrap.h"
#include "iostream"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &instance);
    ~ScavTrap();

    ScavTrap& operator=(ScavTrap const &scavTrap);

    void attack(const std::string& target);
    void guardGate(void) const;

};

std::ostream & operator<<( std::ostream & ostream, ScavTrap const &rhs);

#endif //CPP03_SCAVTRAP_H
