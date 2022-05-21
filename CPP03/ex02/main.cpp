
#include "ClapTrap.h"
#include "FragTrap.h"
#include "ScavTrap.h"

int main() {
    ClapTrap c("Clap");
    FragTrap f("Frag");
    FragTrap g(f);
    ScavTrap s("Scav");

    std::cout << c << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
    std::cout << s << std::endl;

    c.attack("Demon");
    f.attack("Demon");
    s.attack("Demon");

    f.highFivesGuys();
    s.guardGate();

    std::cout << c << std::endl;
    std::cout << f << std::endl;
    std::cout << g << std::endl;
    std::cout << s << std::endl;

    return 0;
}