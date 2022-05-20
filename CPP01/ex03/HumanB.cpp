//
// Created by Evelyn Veiled on 5/16/22.
//

#include "HumanB.h"

void HumanB::attack() {
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) {
    _name = name;
}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) {
    _weapon = &weapon;
}
