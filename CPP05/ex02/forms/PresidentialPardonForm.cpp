//
// Created by Evelyn Veiled on 5/25/22.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() {

}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form("PresidentialPardonForm", 25, 5) {
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &p) : Form(p.getName(), p.getSignGrade(), p.getExecGrade()) {
    *this = p;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &p) {
    if (this == &p) {
        return *this;
    }
    _target = p._target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {
    if (!getIsSigned()) {
        throw FormNotSignedException();
    }
    if (getExecGrade() < bureaucrat.getGrade()) {
        throw GradeTooLowException();
    }

    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
