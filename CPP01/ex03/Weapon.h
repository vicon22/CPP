//
// Created by Evelyn Veiled on 5/16/22.
//

#ifndef CPP01MYNE_WEAPON_H
#define CPP01MYNE_WEAPON_H

#include "iostream"


class Weapon {
private:
    std::string _type;
public:
    std::string &getType(void);
    void setType(std::string);
    Weapon();
    ~Weapon();
    Weapon(std::string);
};


#endif //CPP01MYNE_WEAPON_H
