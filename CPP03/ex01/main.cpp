
#include "ClapTrap.h"
#include "ScavTrap.h"

int main(void)
{

    ScavTrap a("Ann");
    ScavTrap b("Bob");

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    b.attack("Demon");
    a.guardGate();
    b.takeDamage(35);
    a.beRepaired(100);

    std::cout << a << std::endl;
    std::cout << b << std::endl;

    return 0;
}