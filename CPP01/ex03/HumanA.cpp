//
// Created by Evelyn Veiled on 5/16/22.
//

#include "HumanA.h"

void HumanA::attack() {
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name , Weapon &weapon) {
    _name = name;
    _weapon = &weapon;
}

HumanA::~HumanA() {}
