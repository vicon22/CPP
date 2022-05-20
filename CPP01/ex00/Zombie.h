#ifndef CPP01MYNE_ZOMBIE_H
#define CPP01MYNE_ZOMBIE_H

#include <iostream>
#include <string.h>

class Zombie {
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void);

private:
    std::string _name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);


#endif //CPP01MYNE_ZOMBIE_H
