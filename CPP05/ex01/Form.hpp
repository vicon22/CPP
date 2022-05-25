//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP05_FORM_H
#define CPP05_FORM_H

#include "Bureaucrat.hpp"

class Form {

public:

    Form(const std::string& name, const int& signGrade, const int& execGrade);
    Form(const Form& form);
    Form& operator=(const Form& form);
    virtual ~Form();

    const std::string & getName() const;
    const bool & getIsSigned() const;
    const int & getSignGrade() const;
    const int & getExecGrade() const;

    void beSigned(const Bureaucrat& bureaucrat);

    class GradeTooHighException : public std::exception {

    public:
        virtual const char * what() const throw();
    };

    class GradeTooLowException : public std::exception {

    public:
        virtual const char * what() const throw();
    };

private:

    Form();

    const std::string _name;
    bool _isSigned;
    const int _signGrade;
    const int _execGrade;

};

std::ostream &operator<<(std::ostream &os, const Form &form);


#endif //CPP05_FORM_H
