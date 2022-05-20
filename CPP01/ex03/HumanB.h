//
// Created by Evelyn Veiled on 5/16/22.
//

#ifndef CPP01MYNE_HUMANB_H
#define CPP01MYNE_HUMANB_H

#include "Weapon.h"

class HumanB {
    std::string _name;
    Weapon *_weapon;
public:
    HumanB(std::string);
    ~HumanB();
    void attack();
    void setWeapon(Weapon&);
};


#endif //CPP01MYNE_HUMANB_H
