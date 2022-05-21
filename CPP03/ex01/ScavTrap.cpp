//
// Created by Evelyn Veiled on 5/20/22.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
    _name = "DefaultScav";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor with parameters called" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap default destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &instance) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = instance;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
    _name = rhs.getName();
    _hitPoints = rhs.getHitPoints();
    _energyPoints = rhs.getEnergyPoints();
    _attackDamage = rhs.getAttackDamage();
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ScavTrap " << _name << " attacks " << target <<
                  ", causing " << _attackDamage << " points of damage!" << std::endl;
        --_energyPoints;
        return;
    }
    if (_hitPoints == 0) {
        std::cout << "ScavTrap " << _name << " has no hit points for attack!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " has no energy points for attack!" << std::endl;
    }
}

void ScavTrap::guardGate() const{
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
        return;
    }
    if (_hitPoints == 0) {
        std::cout << _name << " has no hit points for gate keeping!" << std::endl;
    } else {
        std::cout << _name << " has no energy points for gate keeping!" << std::endl;
    }

}

std::ostream & operator<<( std::ostream & ostream, ScavTrap const &rhs) {
    ostream << "ScavTrap " << rhs.getName() << " has " <<
            rhs.getHitPoints() << " hit points and " <<
            rhs.getEnergyPoints() << " energy points and gives " <<
            rhs.getAttackDamage() << " attack damage!";
    return ostream;
}
