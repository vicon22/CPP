//
// Created by Evelyn Veiled on 5/25/22.
//

#ifndef CPP05_BUREAUCRAT_H
#define CPP05_BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat {
private:
    std::string		_name;
    int				_grade;
public:
    Bureaucrat(const std::string Name, int garde);
    Bureaucrat(const Bureaucrat& copy);
    ~Bureaucrat();

    Bureaucrat& operator=(const Bureaucrat& bureaucrat);

    const std::string	&getName(void) const;
    const int			&getGrade(void) const;

    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception{
    public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception{
    public :
        virtual const char *what() const throw();
    };



};

std::ostream & operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif //CPP05_BUREAUCRAT_H
