
#include "ClapTrap.h"

int main(void)
{

    ClapTrap a("Ann");
    ClapTrap b("Bob");

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    b.takeDamage(7);

    std::cout << b << std::endl;

    b.beRepaired(2);

    std::cout << b << std::endl;

    b.takeDamage(7);

    std::cout << b << std::endl;

    b.beRepaired(2);

    std::cout << b << std::endl;

    ClapTrap c(b);

    std::cout << c << std::endl;

    for (int i = 0; i < 13; ++i) {
        a.attack("Demon");
        std::cout << a << std::endl;
    }
    return 0;
}