//
// Created by Evelyn Veiled on 5/21/22.
//

#include "FragTrap.h"

FragTrap::FragTrap()
{
    _name = "DefaultFrag";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor with parameters called" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap default destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &instance) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = instance;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    _name = rhs.getName();
    _hitPoints = rhs.getHitPoints();
    _energyPoints = rhs.getEnergyPoints();
    _attackDamage = rhs.getAttackDamage();
    return *this;
}

void FragTrap::highFivesGuys() {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "High five guys!" << std::endl;
        return;
    }
    if (_hitPoints == 0) {
        std::cout << _name << " has no hit points for positive request!" << std::endl;
    } else {
        std::cout << _name << " has no energy points for positive request!" << std::endl;
    }
}

std::ostream & operator<<( std::ostream & ostream, FragTrap const &rhs) {
    ostream << "FragTrap " << rhs.getName() << " has " <<
            rhs.getHitPoints() << " hit points and " <<
            rhs.getEnergyPoints() << " energy points and gives " <<
            rhs.getAttackDamage() << " attack damage!";
    return ostream;
}
