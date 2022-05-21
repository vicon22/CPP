//
// Created by Evelyn Veiled on 5/20/22.
//

#ifndef CPP03_CLAPTRAP_H
#define CPP03_CLAPTRAP_H

#include "iostream"

class ClapTrap {
protected:

    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &instance);
    ~ClapTrap();

    ClapTrap& operator=(ClapTrap const &rhs);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    const std::string& getName() const;
    const unsigned int& getHitPoints() const;
    const unsigned int& getEnergyPoints() const;
    const unsigned int& getAttackDamage() const;

};
std::ostream & operator<<( std::ostream & ostream, ClapTrap const &rhs);

#endif //CPP03_CLAPTRAP_H
