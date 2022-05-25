//
// Created by Evelyn Veiled on 5/25/22.
//

#include "Intern.h"

Intern::Intern() {

}

Intern::Intern(const Intern &intern) {
    *this = intern;
}

Intern &Intern::operator=(const Intern &intern) {
    (void)intern;
    return *this;
}

Intern::~Intern() {

}

Form *Intern::makeForm(const std::string &name, const std::string &target) {
    const std::string names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form* (Intern::*formMakers[4])(const std::string& target) const = {
        &Intern::makeShrubberyCreationForm,
                &Intern::makeRobotomyRequestForm,
                &Intern::makePresidentialPardonForm,
                &Intern::makeWrongForm
    };
    Form* form;
    int i = 0;

    while (i < 3 && name != names[i]) {
        ++i;
    }

    _name = name;

    form = (this->*formMakers[i])(target);

    std::cout << "Intern creates " << form->getName() << std::endl;

    return form;
}

Form *Intern::makeShrubberyCreationForm(const std::string &target) const {
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(const std::string &target) const {
    return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(const std::string &target) const {
    return new PresidentialPardonForm(target);
}

Form *Intern::makeWrongForm(const std::string &target) const {
    (void)target;
    std::cout << "Form name \"" << _name << "\" does not exist!" << std::endl;
    throw WrongNameException();
}

const char *Intern::WrongNameException::what() const throw() {
    return "form name does not exist";
}