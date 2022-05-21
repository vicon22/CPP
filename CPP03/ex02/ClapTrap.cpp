//
// Created by Evelyn Veiled on 5/20/22.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
    _name = "DefaultClap";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor with parameters called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap default destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &instance) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = instance;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    _name = rhs.getName();
    _hitPoints = rhs.getHitPoints();
    _energyPoints = rhs.getEnergyPoints();
    _attackDamage = rhs.getAttackDamage();
    return *this;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _hitPoints += amount;
        std::cout << _name << " is repared with " << amount <<
        " points and now has " << _hitPoints << " hit points!" << std::endl;
        _energyPoints--;
    }
}

void ClapTrap::attack(const std::string &target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << _name << " attacks " << target <<
                  ", causing " << _attackDamage << " points of damage!" << std::endl;
        --_energyPoints;
        return;
    }
    if (_hitPoints == 0) {
        std::cout << _name << " has no hit points for attack!" << std::endl;
    } else {
        std::cout << _name << " has no energy points for attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints = amount > _hitPoints ? 0 : _hitPoints - amount;
    std::cout << _name << " took " << amount <<
              " points of damage and has " << _hitPoints << " hit points left!" << std::endl;
}





const std::string& ClapTrap::getName() const{
    return _name;
}

const unsigned int& ClapTrap::getAttackDamage() const{
    return _attackDamage;
}

const unsigned int& ClapTrap::getHitPoints() const{
    return _hitPoints;
}

const unsigned int& ClapTrap::getEnergyPoints() const{
    return _energyPoints;
}

std::ostream & operator<<( std::ostream & ostream, ClapTrap const &rhs) {
    ostream << "ClapTrap " << rhs.getName() << " has " <<
      rhs.getHitPoints() << " hit points and " <<
      rhs.getEnergyPoints() << " energy points and gives " <<
      rhs.getAttackDamage() << " attack damage!";
    return ostream;
}