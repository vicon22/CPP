
#include "phonebook.hpp"

int main(void)
{
    std::string str;
    std::string name;
    Phonebook phonebook;

    std::cout << "COMMAND: ";
    std::cin >> str;
    while (str.compare("EXIT"))
    {
        if (!str.compare("ADD"))
        {
            phonebook.addContact();
        }
        if (!str.compare("SEARCH"))
        {
            phonebook.getContact();
        }
        std::cout << "COMMAND: ";
        std::cin >> str;
    }
    return (0);
}
