//
// Created by Evelyn Veiled on 5/16/22.
//

#include "Weapon.h"

void Weapon::setType(std::string type) {
    _type = type;
}

std::string &Weapon::getType() {
    return _type;
}

Weapon::Weapon(std::string type) {
    _type = type;
}

Weapon::Weapon() {}

Weapon::~Weapon() {}