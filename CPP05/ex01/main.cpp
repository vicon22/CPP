
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(){
    {
        try {
            Bureaucrat tim("Tim", 100000);
        }
        catch (std::exception& e) {
            std::cout << "Bureaucrat error: " << e.what() << std::endl;
        }

        try {
            Bureaucrat tom("Tom", 0);
        }
        catch (std::exception& e) {
            std::cout << "Bureaucrat error: " << e.what() << std::endl;
        }
    }

    std::cout << std::endl;

    {
        try {
            Form f("A1", 200, 30);

            std::cout << f << std::endl;
        }
        catch (std::exception &e) {
            std::cout << "Form error: " << e.what() << std::endl;
        }
    }

    std::cout << std::endl;

    {
        Bureaucrat bob("Bob", 90);
        Form a1("A1", 85, 20);

        std::cout << bob << std::endl;
        std::cout << a1 << std::endl;

        std::cout << std::endl;

        while (!a1.getIsSigned()) {
            try {
                bob.signForm(a1);
            }
            catch (std::exception &e) {
                std::cout << bob << " - SIGN error: " << e.what() << std::endl;
                bob.incrementGrade();
            }
        }

        std::cout << "-------------" << std::endl;

        std::cout << bob << std::endl;
        std::cout << a1 << std::endl;

        std::cout << std::endl;

        Form a2 = a1;
        Form a3(a2);

        std::cout << "a2: " << a2 << std::endl;
        std::cout << "a3: " << a3 << std::endl;

        bob.decrementGrade();
        std::cout << "decrement: " << bob << std::endl;
    }

    return 0;
}