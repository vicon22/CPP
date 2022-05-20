//
// Created by Evelyn Veiled on 5/16/22.
//

#ifndef CPP01MYNE_HUMANA_H
#define CPP01MYNE_HUMANA_H

#include "Weapon.h"

class HumanA {
private:
    std::string _name;
    Weapon *_weapon;
public:
    HumanA(std::string, Weapon&);
    ~HumanA();
    void attack();
};


#endif //CPP01MYNE_HUMANA_H
