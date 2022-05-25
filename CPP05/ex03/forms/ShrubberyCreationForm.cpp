//
// Created by Evelyn Veiled on 5/25/22.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() {

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137) {
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &s) : Form(s.getName(), s.getSignGrade(), s.getExecGrade()) {
    *this = s;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &s) {
    if (this == &s) {
        return *this;
    }
    _target = s._target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {
    if (!getIsSigned()) {
        throw FormNotSignedException();
    }
    if (getExecGrade() < bureaucrat.getGrade()) {
        throw GradeTooLowException();
    }

    std::ofstream out(_target + "_shrubbery");

    if (out.is_open()) {
        out << "       _-_" << std::endl;
        out << "    /~~   ~~\\" << std::endl;
        out << " /~~         ~~\\" << std::endl;
        out << "{               }" << std::endl;
        out << " \\  _-     -_  /" << std::endl;
        out << "   ~  \\\\ //  ~" << std::endl;
        out << "_- -   | | _- _" << std::endl;
        out << "  _ -  | |   -_" << std::endl;
        out << "      // \\\\" << std::endl;
    }
    out.close();
}