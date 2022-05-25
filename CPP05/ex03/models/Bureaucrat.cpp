//
// Created by Evelyn Veiled on 5/25/22.
//

#include "Bureaucrat.hpp"
#include "../forms/Form.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) {
    if (grade < 1) {
        throw GradeTooHighException();
    }
    if (grade > 150) {
        throw GradeTooLowException();
    }
    _name = name;
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy.getName()){
    if (copy.getGrade() < 1) {
        throw GradeTooHighException();
    }
    if (copy.getGrade() > 150) {
        throw GradeTooLowException();
    }
    *this = copy;

}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
    if (this == &bureaucrat) {
        return *this;
    }
    _name = bureaucrat.getName();
    _grade = bureaucrat.getGrade();
    return *this;
}

Bureaucrat::~Bureaucrat() {

}

const std::string &Bureaucrat::getName() const {
    return _name;
}

const int &Bureaucrat::getGrade() const {
    return _grade;
}

void Bureaucrat::incrementGrade() {
    if (_grade <= 1) {
        throw GradeTooHighException();
    }
    --_grade;
}

void Bureaucrat::decrementGrade() {
    if (_grade >= 150) {
        throw GradeTooLowException();
    }
    ++_grade;
}

void Bureaucrat::signForm(Form &form) const {
    form.beSigned(*this);
    std::cout << _name << " signed " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(const Form &form) const {
    form.execute(*this);
    std::cout << this->_name << " executed " << form.getName() << std::endl;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return ("tried to set too high grade!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return ("tried to set too low grade!");
}

std::ostream & operator<<(std::ostream &os, Bureaucrat const &bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return os;
}