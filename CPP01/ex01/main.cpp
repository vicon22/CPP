
#include "Zombie.h"


int main() {

    int N = 5;

    Zombie *zombies = zombieHorde(N, "Jerry");

    for (int i = 0; i < N; ++i) {
        zombies[i].announce();
    }
    delete[] zombies;

    return 0;
}