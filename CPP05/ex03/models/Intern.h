//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP05_INTERN_H
#define CPP05_INTERN_H


#include "../../ex02/forms/ShrubberyCreationForm.h"
#include "../../ex02/forms/RobotomyRequestForm.h"
#include "../../ex02/forms/PresidentialPardonForm.h"

class Intern {

public:

    Intern();
    Intern(const Intern& intern);
    Intern& operator=(const Intern& intern);
    virtual ~Intern();

    Form* makeForm(const std::string& name, const std::string& target);

    class WrongNameException : public std::exception {
    public:
        virtual const char * what() const throw();
    };

private:

    std::string _name;

    Form* makeShrubberyCreationForm(const std::string& target) const;
    Form* makeRobotomyRequestForm(const std::string& target) const;
    Form* makePresidentialPardonForm(const std::string& target) const;
    Form* makeWrongForm(const std::string& target) const;

};


#endif //CPP05_INTERN_H
