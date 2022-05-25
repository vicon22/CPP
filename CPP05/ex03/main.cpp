
#include <iostream>
#include "models/Bureaucrat.hpp"
#include "models/Intern.h"
#include "forms/Form.hpp"
#include "forms/ShrubberyCreationForm.h"
#include "forms/RobotomyRequestForm.h"
#include "forms/PresidentialPardonForm.h"


int main(void){
    Form *teste;
    Intern mano;

    teste = mano.makeForm("robotomy request", "TEST1");
    std::cout << *teste << std::endl << std::endl;
    teste = mano.makeForm("shrubbery creation", "TEST2");
    std::cout << *teste << std::endl << std::endl;
    teste = mano.makeForm("presidential pardon", "TEST3");
    std::cout << *teste << std::endl << std::endl;
    try {
        teste = mano.makeForm("shurumelas", "TEST4");
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}