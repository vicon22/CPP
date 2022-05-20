
#include "Zombie.h"

Zombie::Zombie(std::string name) {
    _name = name;
//    return;
}

Zombie::~Zombie() {
    std::cout << _name << " delete" << std::endl;
//    return;
}

void Zombie::announce(void) {
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    _name = name;
}
Zombie::Zombie(void) {
}
