//
// Created by Evelyn Veiled on 5/25/22.
//

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() {

}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", 72, 45) {
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r) : Form(r.getName(), r.getSignGrade(), r.getExecGrade()) {
    *this = r;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r) {
    if (this == &r) {
        return *this;
    }
    _target = r._target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {

}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const {
    if (!getIsSigned()) {
        throw FormNotSignedException();
    }
    if (getExecGrade() < bureaucrat.getGrade()) {
        throw GradeTooLowException();
    }

    std::cout << "* some drilling noises *" << std::endl;
    if (std::rand() % 2) {
        std::cout << _target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << "robotomy failed" << std::endl;
    }
}