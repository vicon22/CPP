
#include <iostream>
#include "models/Bureaucrat.hpp"
#include "forms/Form.hpp"
#include "forms/ShrubberyCreationForm.h"
#include "forms/RobotomyRequestForm.h"
#include "forms/PresidentialPardonForm.h"


int main() {
    Form* form[3];
    Bureaucrat* bureaucrat[3];

    std::cout << "------------" << std::endl;
    try {
//        form[0] = new PresidentialPardonForm("Garden");
        form[0] = new ShrubberyCreationForm("Garden");
        form[1] = new RobotomyRequestForm("Fridge");
        form[2] = new PresidentialPardonForm("Host");

        for (int i = 0; i < 3; ++i)
        {
            std::cout << *(form[i]) << std::endl;
        }

        std::cout << "------------" << std::endl;

        bureaucrat[0] = new Bureaucrat("Ann", 137);
        bureaucrat[1] = new Bureaucrat("Bob", 45);
        bureaucrat[2] = new Bureaucrat("Cox", 6);

        for (int i = 0; i < 3; ++i)
        {
            std::cout << *(bureaucrat[i]) << std::endl;
        }

        int f = 0;
        int bSign = 0;
        int bExec = 0;

        std::cout << "================" << std::endl;
        while (f < 3)
        {
            try {
                bureaucrat[bExec]->executeForm(*(form[f]));
                ++f;
            }
            catch (Form::FormNotSignedException& e) {
                std::cout << form[f]->getName() << ": " << e.what() << std::endl;
                try {
                    bureaucrat[bSign]->signForm(*(form[f]));
                }
                catch (std::exception& e) {
                    std::cout << *(bureaucrat[bSign]) << ": " << e.what() << std::endl;
                    if (bSign < 2) {
                        ++bSign;
                    } else {
                        bureaucrat[bSign]->incrementGrade();
                    }
                }
            }
            catch (std::exception& e) {
                std::cout << form[f]->getName() << ", " << bureaucrat[bExec]->getName() << ": " << e.what() << std::endl;
                if (bExec < 2) {
                    ++bExec;
                } else {
                    bureaucrat[bExec]->incrementGrade();
                }
            }
            std::cout << "------------" << std::endl;
        }

        std::cout << "================" << std::endl;
        bureaucrat[2]->executeForm(*(form[0]));
        std::cout << std::endl;
        bureaucrat[2]->executeForm(*(form[1]));
        std::cout << std::endl;
        bureaucrat[2]->executeForm(*(form[2]));
        std::cout << std::endl;


        for (int i = 0; i < 3; ++i) {
            delete form[i];
        }

        for (int i = 0; i < 3; ++i) {
            delete bureaucrat[i];
        }
    }
    catch (std::exception& e) {
        std::cout << "Constructor error: " << e.what() << std::endl;
    }

    return 0;
}