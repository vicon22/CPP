
#include "Bureaucrat.h"

int	main(){
    try{
        Bureaucrat bureaucrat1("Sam", 1);
        std::cout << bureaucrat1 << std::endl;
        Bureaucrat bureaucrat2("Alex", 15);
        std::cout << bureaucrat2 << std::endl;
        Bureaucrat bureaucrat3("Mark", 149);
        std::cout << bureaucrat3 << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bureaucrat3("John", -10);
        std::cout << bureaucrat3 << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bureaucrat3("Clover", 151);
        std::cout << bureaucrat3 << std::endl;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}