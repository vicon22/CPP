
#include "Zombie.h"


int main() {

    Zombie *zombie = newZombie("Foo");
    randomChump("Tom");
    zombie->announce();
    delete zombie;

    return 0;
}