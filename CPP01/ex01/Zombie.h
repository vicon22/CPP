#ifndef CPP01MYNE_ZOMBIE_H
#define CPP01MYNE_ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie {
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void setName(std::string name);
    void announce(void);

private:
    std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif //CPP01MYNE_ZOMBIE_H
