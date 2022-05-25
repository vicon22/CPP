//
// Created by Evelyn Veiled on 5/25/22.
//

#include "Form.hpp"

Form::Form() : _name("None"), _signGrade(0), _execGrade(0) {

}

Form::Form(const std::string &name, const int &signGrade, const int &execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
    if (signGrade < 1 || execGrade < 1) {
        throw GradeTooHighException();
    }
    if (signGrade > 150 || execGrade > 150) {
        throw GradeTooLowException();
    }
    _isSigned = false;
}

Form::Form(const Form &form) : _name(form._name), _signGrade(form._signGrade), _execGrade(form._execGrade) {
    *this = form;
}

Form &Form::operator=(const Form &form) {
    if (this == &form) {
        return *this;
    }
    _isSigned = form._isSigned;
    return *this;
}

Form::~Form() {

}

const std::string &Form::getName() const {
    return _name;
}

const bool &Form::getIsSigned() const {
    return _isSigned;
}

const int &Form::getSignGrade() const {
    return _signGrade;
}

const int &Form::getExecGrade() const {
    return _execGrade;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
    if (_signGrade < bureaucrat.getGrade()) {
        throw GradeTooLowException();
    }
    _isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "grade is too HIGH!";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "grade is too LOW!";
}

const char *Form::FormNotSignedException::what() const throw() {
    return "form is NOT signed!";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
    os << "Form " << form.getName() <<
       (form.getIsSigned() ? "," : ", NOT") << " SIGNED, sign grade: " <<
       form.getSignGrade() << ", execution grade: " << form.getExecGrade();
    return os;
}